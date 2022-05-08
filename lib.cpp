float numeromaggiore( float array[], int dimensione ){
    float b=0;
    for ( int i=0 ; i<dimensione ; i++){
        if ( b <= array[i]) {
            b=array[i];
        }
    }
    return b;
}
