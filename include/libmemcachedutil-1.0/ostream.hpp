/*
    +--------------------------------------------------------------------+
    | libmemcached-awesome - C/C++ Client Library for memcached          |
    +--------------------------------------------------------------------+
    | Redistribution and use in source and binary forms, with or without |
    | modification, are permitted under the terms of the BSD license.    |
    | You should have received a copy of the license in a bundled file   |
    | named LICENSE; in case you did not receive a copy you can review   |
    | the terms online at: https://opensource.org/licenses/BSD-3-Clause  |
    +--------------------------------------------------------------------+
    | Copyright (c) 2006-2014 Brian Aker   https://datadifferential.com/ |
    | Copyright (c) 2020-2021 Michael Wallner        https://awesome.co/ |
    +--------------------------------------------------------------------+
*/

#pragma once

static inline std::ostream &operator<<(std::ostream &output, const enum memcached_return_t &arg) {
  output << memcached_strerror(NULL, arg);
  return output;
}

static inline std::ostream &operator<<(std::ostream &output, const memcached_st &arg) {
  output << " query_id: " << memcached_query_id(&arg);
  output << " error: " << memcached_last_error_message(&arg);
  return output;
}
