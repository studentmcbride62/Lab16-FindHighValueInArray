// Definition of findHigh function goes here

void findHigh(double *data, int size, int &index, double &highVal){
    highVal = data[0];
    for (int i=0; i<size; i++){
        if (data[i] > highVal){
            highVal = data[i];
            index = i;
        }
    }
}