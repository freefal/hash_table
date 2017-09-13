typedef struct {
  char* key;
  char* value;
} ht_item;

typedef struct {
  int size;
  int count;
  ht_item** items;
} ht_hash_table;

ht_hash_table* ht_new();
char* ht_search(ht_hash_table* ht, const char* key);
