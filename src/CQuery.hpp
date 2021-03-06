#ifndef CQUERY_BASE_CLASS_t7mjam
#define CQUERY_BASE_CLASS_t7mjam

#include <cheerp/clientlib.h>
#include <cheerp/jsobject.h>
#include <cheerp/types.h>
#include "definitions.hpp"
#include "excepts/NotImplemented.hpp"
#include "CssStyleHelper.hpp"
#include <unordered_map>

/* Previous declaration for CQuery CALLBACK Object */
class CQueryCallback;

/* Previous declaration for CQuery Object */
class CQUERY_API CQuery
{
    friend class CQueryStatic;

public:
    static constexpr char *version = "0.0.1";
    /**
     * @brief Construct a new CQuery object
     * 
     */
    CQuery() noexcept
    {
    }

    /**
     * @brief 
     *  Bind an event handler to the "click" JavaScript event
     *
     * @param handler 
     *  A function to execute each time the event is triggered.
     * 
     * @see 
     *  {@link https://api.jquery.com/click/#click-handler}
     */
    CQuery &click(client::EventListener *handler)
    {
        elem->addEventListener("click", handler);
        return *this;
    }


    /**
     * @brief 
     *  Specify a function to execute when the DOM is fully loaded.
     *
     * @param handler 
     *  A function to execute after the DOM is ready.
     * 
     * @see 
     *  {@link https://api.jquery.com/ready/}
     */
    CQuery &ready(client::EventListener *handler)
    {
        client::document.addEventListener("DOMContentLoaded", handler);
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
        } 
        else 
        {
            auto _getSh =  sslist->item(0);
            auto styleSheet =  static_cast<client::CSSStyleSheet*>(_getSh);
            styleSheet->insertRule(ruleValStr);
        }

        return *this;
    }

    CQuery& css(CSSStyleHelper enumValue, const client::String& str)
    {
        addCssStyle(
            static_cast<client::ElementCSSInlineStyle*>(
                static_cast<client::HTMLElement*>(elem)
            ),
            enumValue,
            str
        );

        return *this;
    }

    CQuery& css(std::initializer_list<client::Object*> property)
    {
        // operations
        // throw NotImplementedException("Function is not Implemented");
        return *this;
    }

    CQuery& css(std::initializer_list<std::pair<const client::String&, const client::String&>> property)
    {
        // operations
        for (auto it = property.begin(); it != property.end(); ++it)  {
            this->css(it->first, it->second);
        } 

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
     * Execute all handlers and behaviors attached to the matched elements for the given event type.
     *
     * @param eventType 
     *  A string containing a JavaScript event type, such as click or submit.
     * 
     * @see 
     *  {@link https://api.jquery.com/trigger/#trigger-eventType-extraParameters}
     */
    CQuery& trigger(const client::String& eventType)
    {
        auto event = client::document.createEvent("HTMLEvents");
        event->initEvent("change", true, false);
        elem->dispatchEvent(event);

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

    /**
     * @brief 
     * Create a deep copy of the set of matched elements.
     * 
     * @param withDataAndEvents 
     *  A Boolean indicating whether event handlers and data should be copied along 
     *  with the elements. The default value is false.
     * 
     * @see 
     *  {@link https://api.jquery.com/clone/}
     */
    CQuery& clone(bool withDataAndEvents) 
    {
        elem->cloneNode(true);
        return *this;
    }

    /**
     * @brief 
     *  Check the current matched set of elements against a selector, element, or jQuery object 
     *  and return true if at least one of these elements matches the given arguments.
     *
     * @param selector 
     *  A string containing a selector expression to match elements against.
     * 
     * @see 
     *  {@link https://api.jquery.com/is/#is-selector}
     * 
     * @warning
     *  It maybe fail when using
     *   - el.matchesSelector 
     *   - el.mozMatchesSelector 
     *   - el.webkitMatchesSelector
     *   - el.oMatchesSelector
     */
    bool is(const client::String& selector)
    {
        return elem->matches(selector) || elem->msMatchesSelector(selector);
    }

    /**
     * @brief 
     *  Determine whether any of the matched elements are assigned the given class.
     *
     * @param className 
     *  The class name to search for.
     * 
     * @see 
     *  {@link https://api.jquery.com/hasClass/}
     */
    bool hasClass(client::String className)
    {
        return elem->get_classList()->contains(className);
    }

    /**
     * @brief 
     *  Get the HTML contents of the first element in the set of matched elements.
     * 
     * @see 
     *  {@link https://api.jquery.com/html/#html}
     */
    client::String* html() 
    {
        return elem->get_innerHTML(); 	
    }

    /**
     * @brief 
     *  Set the HTML contents of each element in the set of matched elements.
     *
     * @param htmlString 
     *  A string of HTML to set as the content of each matched element.
     * 
     * @see 
     *  {@link https://api.jquery.com/html/#html-htmlString}
     */
    CQuery& html(const client::String& html) 
    {
        elem->set_innerHTML(html);
        return * this;
    }

    /**
     * @brief 
     *  Get the combined text contents of each element in the set of matched elements,
     *  including their descendants.
     * 
     * @see 
     *  {@link https://api.jquery.com/text/#text}
     */
    client::String* text() 
    {
        return elem->get_textContent(); 	
    }

    /**
     * @brief 
     * Set the content of each element in the set of matched elements to the specified text.
     * 
     * @param text 
     *  The text to set as the content of each matched element. When Number or Boolean is supplied, 
     *  it will be converted to a String representation.
     * 
     * @see 
     *  {@link https://api.jquery.com/text/#text-text}
     */
    CQuery& text(const client::String& html) 
    {
        elem->set_textContent(html);
        return *this;
    }

    /**
     * @brief 
     *  Get the current computed width for the first element in the set of matched elements.
     * 
     * @see     
     *  {@link https://api.jquery.com/width/#width}
     */
    double width()
    {
        return client::parseFloat(client::getComputedStyle(elem)->get_width()->replace("px", ""));
    }

    /**
     * @brief 
     *  Search for a given element from among the matched elements.
     * 
     * @see 
     *  {@link https://api.jquery.com/index/#index}
     */
    int index() 
    {
        if(!elem) return -1;

        int i {0};
        while(elem = elem->get_previousElementSibling()) ++i;

        return i;
    }

private:
    void set_elem(const client::String &str)
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

#endif /* end of include guard : CQUERY_BASE_CLASS_t7mjam */