#include "idle.h"

/*
 * Just a bunch of non-sense idle messages.
 * They can be funny only if their number grow, so contribute.
 */

const char *idle_msgs[] = {
    "Spravna krychle tuhne rychle.",
    "Nevstupovat, vstupuje samo.",
    "Skokana kdyz jeste zije - ujima se policie",
    "All your base are belong to us.",
    "Rozum a chtic nemohou byt trvale v opozici.",
    "Pica pice puci klice.",
    "Nasral franta na trabanta.",
    "Na zacatku bylo slovo. To slovo bylo mrdat.",
    "Segmentation fault (core dumped).",
    "Floating point exception.",
    "Banik pyco!",
    "Racek racku posral packu.",
    "Obcas kontrolujte smajle, at to mame zupa dokonaly.",
    "Hej, tohle je posledni idle zprava, tzn. (rand() + 1) % idle_msgs == 0, mazec!"
};

const int idle_msgs_count = sizeof(idle_msgs)/sizeof(*idle_msgs);
