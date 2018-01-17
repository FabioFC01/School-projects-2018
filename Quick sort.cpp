#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void quick_sort (vett[], start, end);

int main ()
{
  int *vett;
  int k, i;
  printf ("Quanti elementi deve avere l'array? ");
  scanf ("%d", &k);
  //alloco il mio vettore
  vett = (int *) malloc (k * sizeof (int));
  //riempio il mio vettore
  for (i = 0; i < k; i++)
    {
      cout << "Inserisci il valore del vettore alla posizione " << i + 1 << " : ";
      cin >> vett[i];
    }
    for (i = 0; i < k; i++){
        if(i % 10 == 0){
            cout << endl;
        }
        cout <<vett[i] << "    ";
    }
    //ordinamento
    void quick_sort (vett[], 0, k-1);
    //stampa vettore ordinato
    for (i = 0; i < k; i++){
        if(i % 10 == 0){
            cout << endl;
        }
        cout <<vett[i] << "    ";
    }
    system("pause");
    return 0;
}

void quick_sort (vett[], start, end){
    int sx=start+1;
    int dx = end;
    int pivot = start;
    int temp;
    
    while(dx > sx){
        while(vett[sx] <vett[pivot] && (sx < dx)){
            sx++;
        }
         while(vett[dx] >vett[pivot] ){
            dx--;
        }
        //swap sx e dx
        if(sx < dx){
        temp = vett[sx];
        vett[sx] = vett[dx];
        vett[dx] = temp;
    }
    //swap dx e pivot
    temp = vett[dx];
    vett[dx] = vett[pivot];
    vett[pivot] = temp;
    //ricorsione
    quick_sort(vett[], sx, dx-1);
    quick_sort(vett[], dx+1, dx);
}
