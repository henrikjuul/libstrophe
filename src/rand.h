/* rand.h
 * strophe XMPP client library -- pseudo-random number generator
 *
 * Copyright (C) 2013 Dmitry Podgorny <pasis.ua@gmail.com>
 *
 *  This software is provided AS-IS with no warranty, either express
 *  or implied.
 *
 *  This software is distributed under license and may not be copied,
 *  modified or distributed except as expressly authorized under the
 *  terms of the license contained in the file LICENSE.txt in this
 *  distribution.
 */

/** @file
 *  Pseudo-random number generator.
 */

#ifndef __LIBSTROPHE_RAND_H__
#define __LIBSTROPHE_RAND_H__

#include "strophe.h"
#include "ostypes.h"

typedef struct _xmpp_rand_t xmpp_rand_t;

xmpp_rand_t *xmpp_rand_new(xmpp_ctx_t *ctx);
void xmpp_rand_free(xmpp_ctx_t *ctx, xmpp_rand_t *rand);

/** Analogue of rand(3). */
int xmpp_rand(xmpp_ctx_t *ctx);

/** Generates random bytes. */
void xmpp_rand_bytes(xmpp_ctx_t *ctx, uint8_t *output, size_t len);

/** Generates a nonce that is printable randomized string.
 *
 * @param len Number of bytes reserved for the output string, including
 *            end of line '\0'.
 */
void xmpp_rand_nonce(xmpp_ctx_t *ctx, char *output, size_t len);

#endif /* __LIBSTROPHE_RAND_H__ */
