#ifndef _UTILS_H
#define _UTILS_H

/* impl at utils.c */
char *format_string(const char *restrict __format, ...); /* defined at line 13 */
int init_project(); /* defined at line 38 */
char *safe_strdup(const char *s); /* defined at line 58 */
char *join_strings(char **strings, const char *separator); /* defined at line 80 */

/* impl at split_args.c */
char **split_args(const char *input);
void free_args(char **argv);

/* impl at guid.c */
char *generate_guid_v4();

#endif
