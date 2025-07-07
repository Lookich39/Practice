int compare_by_name(const void *a, const void *b) {
    return strcmp((*(studs **)a)->name, (*(studs **)b)->name);
}
void sort_by_name(studs **sarray, int n) {
    qsort(sarray, n, sizeof(studs *), compare_by_name);
}
