/*======
This file is part of Percona Server for MongoDB.

Copyright (C) 2018-present Percona and/or its affiliates. All rights reserved.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the Server Side Public License, version 1,
    as published by MongoDB, Inc.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    Server Side Public License for more details.

    You should have received a copy of the Server Side Public License
    along with this program. If not, see
    <http://www.mongodb.com/licensing/server-side-public-license>.

    As a special exception, the copyright holders give permission to link the
    code of portions of this program with the OpenSSL library under certain
    conditions as described in each individual source file and distribute
    linked combinations including the program with the OpenSSL library. You
    must comply with the Server Side Public License in all respects for
    all of the code used other than as permitted herein. If you modify file(s)
    with this exception, you may extend this exception to your version of the
    file(s), but you are not obligated to do so. If you do not wish to do so,
    delete this exception statement from your version. If you delete this
    exception statement from all source files in the program, then also delete
    it in the license file.
======= */

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

void store_pseudo_bytes(uint8_t *buf, int len);
int get_iv_gcm(uint8_t *buf, int len);
int get_key_by_id(const char *keyid, size_t len, unsigned char *key, void *pe);
int percona_encryption_extension_drop_keyid(void *vp);

void rotation_store_pseudo_bytes(uint8_t *buf, int len);
int rotation_get_iv_gcm(uint8_t *buf, int len);
int rotation_get_key_by_id(const char *keyid, size_t len, unsigned char *key, void *pe);

#ifdef __cplusplus
}
#endif
