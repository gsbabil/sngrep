//
// Created by kaian on 9/04/18.
//

#ifndef SNGREP_GLIB_UTILS_H
#define SNGREP_GLIB_UTILS_H

#include <glib.h>

#define g_sequence_first(sequence) g_sequence_nth(sequence, 0)
#define g_sequence_last(sequence) g_sequence_nth(sequence, g_sequence_get_length(sequence))

gpointer
g_sequence_nth(GSequence *sequence, guint index);

gint
g_sequence_iter_length(GSequenceIter *iter);

void
g_sequence_iter_set_pos(GSequenceIter **iter, gint pos);

gint
g_sequence_index(GSequence *sequence, gconstpointer item);

void
g_sequence_remove_data(GSequence *sequence, gconstpointer item);

void
g_sequence_remove_all(GSequence *sequence);

void
g_sequence_append_sequence(GSequence *sequence, GSequence *items);

GSequence *
g_sequence_copy(GSequence *sequence, GEqualFunc filter_func, gpointer filter_data);

#endif //SNGREP_GLIB_UTILS_H
