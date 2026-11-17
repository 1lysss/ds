#include "ds.h"
#include <assert.h>
int main()
{
    da arr  = da_init(1);
    da_insert(&arr, 1000);
    da_insert(&arr, 2000);

    // for (int i = 0; i < 20; i++) {
    //     da_insert(&arr, i * 10);
    //     // printf("inserted %d -> count=%zu | capacity=%zu\n", i * 10, arr.count, arr.capacity);
    // }

    size_t count = da_count(&arr);
    da_set(&arr, 0, 69);
    da_set(&arr, count - 1, 420);
    // da_set(&arr, da_count(&arr) - 1,911);



    da_print(arr);
    da_free(&arr);
    return 0;
}
