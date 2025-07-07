struct student{
    char *name;
    char gender;
    int year_of_birth;
    char *spec;
    int year;
    char *group;
    float average;
};
int addr_diff(){
    struct student s;
    int diff;
    diff = &s.year - &s.year_of_birth;
    return diff;
}