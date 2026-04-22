#ifndef H_NODISCARD
#define H_NODISCARD

#if defined(__has_cpp_attribute)
  #if __has_cpp_attribute(nodiscard) >= 201907
    #define NODISCARD(msg) [[nodiscard(msg)]]
  #else
    #define NODISCARD(msg) [[nodiscard]]
  #endif
#else
  #define NODISCARD(msg)
#endif

#endif