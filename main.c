#include <stdio.h>
#include "hash_table.h"

int main() {
  ht_hash_table* ht;
  ht = ht_new();
  ht_insert(ht, "1", "1a");
  ht_insert(ht, "2", "2a");
  char* lookup = ht_search(ht, "1");
  printf("%s\n", lookup);
  ht_del_hash_table(ht);
}
