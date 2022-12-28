int factorial_iter(int n){
    int ret = 1;
    int i = 1;

    for(i=n; i>1; i--){
        ret = ret * i;
    }
    return ret;
}