
#ifndef ___terminal_marshal_MARSHAL_H__
#define ___terminal_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* OBJECT:VOID (terminal-marshal.list:1) */
extern void _terminal_marshal_OBJECT__VOID (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* VOID:OBJECT,INT,INT (terminal-marshal.list:2) */
extern void _terminal_marshal_VOID__OBJECT_INT_INT (GClosure     *closure,
                                                    GValue       *return_value,
                                                    guint         n_param_values,
                                                    const GValue *param_values,
                                                    gpointer      invocation_hint,
                                                    gpointer      marshal_data);

G_END_DECLS

#endif /* ___terminal_marshal_MARSHAL_H__ */

