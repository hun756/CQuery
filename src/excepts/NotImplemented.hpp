#ifndef CQUERY_NOT_IMPLEMENTED_EXCEPTION_HPP
#define CQUERY_NOT_IMPLEMENTED_EXCEPTION_HPP

#include "./base.hpp"

class NotImplementedException : public BaseExteption {
public:
    /** Constructor (C strings).
     *  @param message C-style string error message.
     *                 The string contents are copied upon construction.
     *                 Hence, responsibility for deleting the char* lies
     *                 with the caller.
     */
    NotImplementedException(const char *message)
        : BaseExteption(message) {}

    /** Constructor (C++ STL strings).
     *  @param message The error message.
     */
    NotImplementedException(const std::string &message)
        : BaseExteption(message) {}

    /** Destructor.
     * Virtual to allow for subclassing.
     */
    virtual ~NotImplementedException() noexcept {}

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *          is in posession of the Exception object. Callers must
     *          not attempt to free the memory.
     */
    virtual const char *what() const noexcept
    {
        return msg_.c_str();
    }
};



#endif /* end of include guard : CQUERY_NOT_IMPLEMENTED_EXCEPTION_HPP */