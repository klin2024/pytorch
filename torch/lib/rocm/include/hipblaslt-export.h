
#ifndef HIPBLASLT_EXPORT_H
#define HIPBLASLT_EXPORT_H

#ifdef HIPBLASLT_STATIC_DEFINE
#  define HIPBLASLT_EXPORT
#  define HIPBLASLT_NO_EXPORT
#else
#  ifndef HIPBLASLT_EXPORT
#    ifdef hipblaslt_EXPORTS
        /* We are building this library */
#      define HIPBLASLT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define HIPBLASLT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef HIPBLASLT_NO_EXPORT
#    define HIPBLASLT_NO_EXPORT 
#  endif
#endif

#ifndef HIPBLASLT_DEPRECATED
#  define HIPBLASLT_DEPRECATED __declspec(deprecated)
#endif

#ifndef HIPBLASLT_DEPRECATED_EXPORT
#  define HIPBLASLT_DEPRECATED_EXPORT HIPBLASLT_EXPORT HIPBLASLT_DEPRECATED
#endif

#ifndef HIPBLASLT_DEPRECATED_NO_EXPORT
#  define HIPBLASLT_DEPRECATED_NO_EXPORT HIPBLASLT_NO_EXPORT HIPBLASLT_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef HIPBLASLT_NO_DEPRECATED
#    define HIPBLASLT_NO_DEPRECATED
#  endif
#endif

#endif /* HIPBLASLT_EXPORT_H */
