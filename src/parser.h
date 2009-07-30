/*
 * Copyright (c) 2007,2008 Mij <mij@bitchx.it>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * SSHGuard. See http://sshguard.sourceforge.net
 */

#ifndef PARSER_H
#define PARSER_H

/* also define global var yydebug = 1 for enabling debugging at runtime */
#define YYDEBUG 1
#ifdef YYDEBUG
extern int yydebug;
extern int yy_flex_debug;
#endif



#include "sshguard_services.h"
#include "sshguard_addresskind.h"
#include "sshguard_attack.h"

attack_t parsed_attack;

int yyparse();
/* this is defined in attack_scanner.c */
int parse_line(char *str);

#endif
