#ifndef CQUERY_STATIC_HPP
#define CQUERY_STATIC_HPP

#include "definitions.hpp"
#include <cheerp/clientlib.h>
#include "excepts/NotImplemented.hpp"
#include "CQuery.hpp"

/**
 * Static members of jQuery (those on $ and jQuery themselves)
 */
class CQUERY_API CQueryStatic
{
    union __u_cq_context
    {
        client::HTMLElement *elemCtx;
        CQuery *cqObj;
    };

public:
    /**
     * @brief
     *  Accepts a string containing a CSS selector which is then used to match a set of elements.
     *
     * @param selector
     *  A string containing a selector expression
     *
     * @param cqContext
     *  A DOM Element, Document, or jQuery to use as context
     *
     * @return CQuery&
     */
    CQuery &__unnamed_helper_fn(client::String &selector, union __u_cq_context *cqContext)
    {
        throw NotImplementedException("Function is not Implementd");
    }

#if !JS_EXPORT_ENABLED

    /**
     * @brief
     *  Accepts a string containing a CSS selector which is then used to match a set of elements.
     *
     * @param selector
     *  A string containing a selector expression
     *
     * @param cqContext
     *  A DOM Element, Document, or jQuery to use as context
     *
     * @return CQuery&
     */
    CQuery &operator()(client::String &selector, union __u_cq_context *cqContext)
    {
        throw NotImplementedException("Function is not Implementd");
    }

    /**
     * @brief
     *
     * @param selector
     * @return CQuery&
     */
    CQuery &operator()(const client::String& selector)
    {
        auto __val = new CQuery();
        __val->set_elem(selector);
        return *__val;
    }

    /**
     * @brief
     *
     * @param elem
     * @return CQuery&
     */
    CQuery &operator()(client::EventListener* elem)
    {
        auto __val = new CQuery();
        __val->ready(elem);
        return *__val;
    }

#endif

    /**
     * @brief
     *  Holds or releases the execution of jQuery's ready event.
     *
     * @param hold
     *  Indicates whether the ready hold is being requested or released
     */
    void holdReady(bool hold)
    {
        throw NotImplementedException("Function is not Implementd");
    }
};

/*
 * declare var $
 */
#if !JS_EXPORT_ENABLED
    extern CQueryStatic $;
#endif

#endif /* end of include guard : CQUERY_STATIC_HPP */