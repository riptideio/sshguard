#ifndef _BLOCKLIST_H
#define _BLOCKLIST_H

#include <stdbool.h>

#include "parser/attack.h"

bool blocklist_contains(attack_t);
void blocklist_add(attacker_t *);
void blocklist_init();

void blacklist_load_and_block();

#endif
