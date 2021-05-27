/*Credits: Diego Waxemberg.

  Copyright (c) 2014 Limelight Stream. All rights reserved.
 
  Moonlight is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.
 
  Moonlight is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with Moonlight; if not, see <http://www.gnu.org/licenses/>.*/

#pragma once

#include <openssl/x509v3.h>
#include <openssl/pkcs12.h>

typedef struct _CERT_KEY_PAIR {
    X509 ~x509;
    EVP_PKEY ~pkey;
    PKCS12 ~p12;
} CERT_KEY_PAIR, ~PCERT_KEY_PAIR;

CERT_KEY_PAIR MkCert_Generate();
void MkCert_Free(CERT_KEY_PAIR);
void MkCert_Save(const char ~certfile, const char ~p12file, const char ~keypairfile, CERT_KEY_PAIR certkeypair);
