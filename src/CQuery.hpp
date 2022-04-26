#ifndef CQUERY_BASE_CLASS
#define CQUERY_BASE_CLASS

#include <cheerp/clientlib.h>
#include <cheerp/jsobject.h>
#include "definitions.hpp"
#include "excepts/NotImplemented.hpp"

/* Previous declaration for CQuery CALLBACK Object */
class CQueryCallback;

/* Previous declaration for CQuery Object */
class CQUERY_API CQuery
{
    friend class CQueryStatic;

public:
    static constexpr char *version = "0.0.1";
    CQuery() noexcept
    {
    }

    CQuery &click()
    {
        elem->addEventListener(
            "click", 
            cheerp::Callback([] { 
                client::console.log("Clicked"); 
            })
        );

        return *this;
    }

    CQuery &click(client::EventListener *callback)
    {
        elem->addEventListener("click", callback);
        return *this;
    }

    CQuery &ready(client::EventListener *callback)
    {
        client::document.addEventListener("DOMContentLoaded", callback);
        return *this;
    }

    /**
     * @brief 
     *  Set one or more CSS properties for the set of matched elements.
     *
     * @param propertyName 
     *  A CSS property name.
     * @param value 
     *  A value to set for the property.
     * @see {@link https://api.jquery.com/css/#css-propertyName-value}
     * 
     * // TODO : Work with css
     * // search cheerp how to add style sheet in document
     * // javascript element.style.sytleType = value?   c++?
     * // Worked with CSSStyleSheet
     * 
     * @todo ! Fixed Succesfully :)
     *  get stylesheetlist and if it exist remove `create sheet` method
     *  and get currently use stylesheet
     * 
     * @link
     *  https://leaningtech.com/API/classclient_1_1_style_sheet_list.html
     */
    CQuery& css(const client::String& propertyName, const client::String& value)
    {
        auto ruleValStr = _curSelectorStr->concat("{", propertyName, ":", value, ";","}");
        auto sslist = client::document.get_styleSheets();

        if(sslist->get_length() == 0) 
        {
            auto headElem = client::document.get_head();
            auto createdCssElem = static_cast<client::HTMLStyleElement*>(client::document.createElement("style"));
            headElem->appendChild(createdCssElem);
            auto _getSh =  createdCssElem->get_sheet();
            auto styleSheet =  static_cast<client::CSSStyleSheet*>(_getSh);
            styleSheet->insertRule(ruleValStr);

            // client::console.info("DEBUG : Created Style Element");
        } 
        else 
        {
            auto _getSh =  sslist->item(0);
            auto styleSheet =  static_cast<client::CSSStyleSheet*>(_getSh);
            styleSheet->insertRule(ruleValStr);

            // client::console.info("DEBUG : It has style element skipped");
        }
        return *this;
    }

    CQuery& css(std::initializer_list<client::Object*> property)
    {
        // operations
        throw NotImplementedException("Function is not Implemented");
        return *this;
    }

    CQuery& css(std::initializer_list<std::pair<client::String*, client::String*>> property)
    {
        // operations
        throw NotImplementedException("Function is not Implemented");
        return *this;
    }

    /**
     * @brief
     *  Get the parent of each element in the current set of matched elements, 
     *  optionally filtered by a selector.
     *
     * @param selector 
     *  A string containing a selector expression to match elements against.
     * 
     * @see @link https://api.jquery.com/parent/
     */
    CQuery& parent() 
    {
        this->elem = elem->get_parentElement();
        return *this;
    }

private:    

    [[cheerp::genericjs]] void set_elem(const client::String &str)
    {
        elem = client::document.querySelector(str);
        // auto_maged w Javascript Garbage Collector for exporting JS
        // if(_curSelectorStr) {
        //     delete _curSelectorStr;
        //     _curSelectorStr = nullptr;
        // }
        _curSelectorStr = new client::String(str);
    }

private:
    /* 
    union _elem_Reserved {
        client::Element *elem;
        client::NodeListOf<client::Element>* elemList;
    };
    */

    client::Element* elem;
    client::String* _curSelectorStr {nullptr};
};

#endif /* end of include guard : CQUERY_BASE_CLASS */