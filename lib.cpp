int numeromaggiore( int array[], int dimensione ){
    int b=0;
    for ( int i=0 ; i<dimensione ; i++){
        if ( b <= array[i]) {
            b=array[i];
        }
    }
    return b;
}
