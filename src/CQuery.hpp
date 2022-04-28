#ifndef CQUERY_BASE_CLASS
#define CQUERY_BASE_CLASS

#include <cheerp/clientlib.h>
#include <cheerp/jsobject.h>
#include <cheerp/types.h>
#include "definitions.hpp"
#include "excepts/NotImplemented.hpp"
#include <unordered_map>

/* Previous declaration for CQuery CALLBACK Object */
class CQueryCallback;

/* Previous declaration for CQ      uery Object */
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
     * @note
     *  Jquery using elementinline css type
     * @example 
     * @code
     *  auto _stylesheet = 
     *      static_cast<client::ElementCSSInlineStyle*>(client::document.getElementById("app"))->get_style();
     *  stylesheet->set_backgroundColor("red");
     * {@link https://leaningtech.com/API/classclient_1_1_element_c_s_s_inline_style.html}
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
        // throw NotImplementedException("Function is not Implemented");
        return *this;
    }

    CQuery& css(std::initializer_list<std::pair<client::String*, client::String*>> property)
    {
        // operations
        for (auto it = property.begin(); it != property.end(); ++it)  {
            this->css(it->first, it->second);
        } 

        // throw NotImplementedException("Function is not Implemented");
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

    /**
     * @brief 
     *  Hide the matched elements.
     * 
     * @param duration 
     *  A string or number determining how long the animation will run.
     * 
     * @param complete 
     *  A function to call once the animation is complete.
     * 
     * @see 
     *  {@link https://api.jquery.com/hide/#hide}
     * @todo
     *  Apply animation
     */
    CQuery& hide(/*client::String& duration , client::EventListener* complete = nullptr */)
    {
        this->css("display", "none");
        return *this;
    }

    private:

        enum class EventType {
            Abort,
            Click,
            MouseMove,
            MouseOver,
            MouseEnter,
            Unkown
        };

    public:

    /**
     * @brief 
     *  Attach an event handler function for one or more events to the
     *  selected elements.
     *
     * @param events 
     *  One or more space-separated event types and optional namespaces, 
     *  such as "click" or "keydown.myPlugin".
     * @param data 
     *  Data to be passed to the handler in event.data when an event is triggered.
     * @param handler A function to execute when the event is triggered. The value
     * false is also allowed as a shorthand for a function that simply does return false.
     * 
     * @see {@link https://api.jquery.com/on/#on-events-selector-data-handler}
     * 
     * @todo
     *  events must be of type "JQueryEventObject". However, since this class is not implemented,
     *  the eventlistener in the client library will be used.
     * 
     * @warning
     * @todo
     *  The unordered map code grows to 2000 lines. After looking at the performance measurement, 
     *  let's decide whether to use unordered_map or inline as in the example.
    */
   CQuery& on(const client::String& events, client::EventListener* handler)
   {
        elem->addEventListener(events, handler);
        return *this;
   }

   /**
    * @brief 
     * Remove an event handler.
     *
     * @param events 
     *  One or more space-separated event types and optional namespaces, 
     *  or just namespaces, such as "click", "keydown.myPlugin", or ".myPlugin".
     * 
     * @param handler 
     *  A handler function previously attached for the event(s), or the 
     *  special value false.
     * 
     * @see 
     *  {@link https://api.jquery.com/off/#off-events-selector-handler}
     */
    CQuery& off(const client::String& events, client::EventListener* handler)
    {
        elem->removeEventListener(events, handler);
        return *this;
    }

private:
    /**
     * @brief 
     *  Get the Event Type From Client String object
     * 
     * @warning 
     *  unused.
     */
    EventType getEventTypeFromClientString(const client::String& str) {
        std::unordered_map<const char*, EventType> _map {
            {"abort", EventType::Abort},
            {"click", EventType::Click},
            {"mouseover", EventType::MouseOver},
            {"mousemove", EventType::MouseMove},
            {"mouseenter", EventType::MouseEnter},

            // ...
        };

        auto _var = this->_h_client_String_to_constChar(str);
        // auto iter = _map.find(_var);

        for (const auto& x : _map) {
            if(strcmp(_var, x.first) == 0) {
                return x.second;
            }
        }            

        return EventType::Unkown;
    }

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

    /**
     * @brief 
     *  This helper method converts client::String to const char*
     * @param str 
     * 
     * @return const char* 
     */
    [[cheerp::genericjs]] const char* _h_client_String_to_constChar(const client::String& str) {
        auto _len = str.get_length();
        const auto _ch = new char[_len + 1];

		for(size_t i = 0; i < _len; ++i)
			_ch[i] = str.charCodeAt(i);

        _ch[_len] = '\0';
        return _ch;
    }

private:
    /**
     * @brief 
     *  Cquery is supporting one element now.
     *  This union structure will be used when element lists support.
     */
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