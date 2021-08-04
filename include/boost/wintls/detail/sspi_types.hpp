//
// Copyright (c) 2020 Kasper Laudrup (laudrup at stacktrace dot dk)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_WINTLS_DETAIL_SSPI_TYPES_HPP
#define BOOST_WINTLS_DETAIL_SSPI_TYPES_HPP

// TODO: Avoid cluttering global namespace (and avoid Windows headers if possible)
// Maybe copy some relevant parts from here:
// https://github.com/ArvidNorr/FreeRDP/blob/master/include/freerdp/sspi/sspi.h
#ifndef SECURITY_WIN32
#define SECURITY_WIN32
#else
#define BOOST_WINTLS_SECURITY_WIN32_DEFINED
#endif

#ifndef UNICODE
#define UNICODE
#else
#define BOOST_WINTLS_UNICODE_DEFINED
#endif

#include <schannel.h>
#include <security.h>
#include <sspi.h>
#include <wincrypt.h>

#ifndef BOOST_WINTLS_SECURITY_WIN32_DEFINED
#undef SECURITY_WIN32
#endif

#ifndef BOOST_WINTLS_UNICODE_DEFINED
#undef UNICODE
#endif

#endif // BOOST_WINTLS_DETAIL_SSPI_TYPES_HPP
