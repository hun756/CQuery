#ifndef CQUERY_CPP_EXCAPTION_BASE_HPP
#define CQUERY_CPP_EXCAPTION_BASE_HPP

#include <stdexcept>
#include <string>

class BaseExteption : public std::exception {
    using __STD_CQUERY_EXCEPTION_DATA = std::string;
public:
    /** Constructor (C strings).
     *  @param message C-style string error message.
     *                 The string contents are copied upon construction.
     *                 Hence, responsibility for deleting the char* lies
     *                 with the caller.
     */
    BaseExteption(const char *message)
        : msg_(message) {}

    /** Constructor (C++ STL strings).
     *  @param message The error message.
     */
    BaseExteption(const std::string &message)
        : msg_(message) {}

    /** Destructor.
     * Virtual to allow for subclassing.
     */
    virtual ~BaseExteption() noexcept {}

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *          is in posession of the Exception object. Callers must
     *          not attempt to free the memory.
     */
    virtual const char *what() const noexcept
    {
        return msg_.c_str();
    }

protected:
    /** Error message.
     */
    __STD_CQUERY_EXCEPTION_DATA msg_;
};

#endif /* CQUERY_CPP_EXCAPTION_BASE_HPP */