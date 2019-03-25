/*Anghelescu Diana Livia
  Grupa 211
  Tema 1 ex.4-Cozi de caractere*/
#include <iostream>
#include <string>
#include <deque>

using namespace std;

class Nod{
    friend class Coada;
    friend ostream& operator<<(ostream&, const Nod&);
    friend istream& operator>>(istream&, const Nod&);

private:
	char val;
public:
	void set(char value){
		val = value;
	}
	char get_value(){
		return value;
	}
	istream& operator >>(istream& input,const Nod &n){
		input >> n.val;
		return input;
	}
	ostream& operator <<(ostream& output,const Nod &n){
		output >> n.val;
	}

};

class Coada(){
    friend class Nod;

public:

	Coada()
	{
	    Nod* array[]=NULL;
	    int counter=0;
	}
	Coada(int l)
	{
	    counter=l;
	    array=new nod[counter];
	}
	Coada~()
	{
	    delete[] array;
	}
	int get_counter(){
		return counter;
	}

	Nod push(Nod new_nod){
		counter++;
		Nod current_array[counter];
		for(int i = counter; i > 0; i--){
			current_array[i].set(array[i].get_value());
		}
		current_array[counter].set(new_node.get_value());
		delete[] array;
		return current_array;
	}
	Nod pop(){
		if(counter != 0){
			counter--;
			Nod current_array[counter];
			for(int i = counter; i > 0; i--){
				current_array[i].set(array[i].get_value());
			}
			delete[] array;
			return current_array;
		}
		else{
			cout << "Nu mai sunt elemente in coada";
		}

	}
	Nod top(){
		return array[counter];
	}
	Coada operator+(Coada coada1, Coada coada2){
		int new_counter = coada1.get_counter() + coada2.get_counter();
		Coada coada3.counter = new_counter;
		count = coada1.get_counter;
		for(int i = coada1.get_counter; i > 0; i--){
			coada3.array[i].set(coada2.array[i].get_value());
			new_counter--;
		}
		for(int i = new_counter; i > 0; i--){
			coada3.array[i].set(coada1[count].get_value());
			count--;
		}

		return coada3;
	}

	Coada operator-(Coada coada1, coada2){
		if(coada1.get_counter() > coada2.get_counter()){
			for(int i=coada1.get_counter;i>0;i--){
                coada1.get_counter()=coada1.get_counter()-coada2.get_counter();
                pop(coada1[i]);
                pop(coada2[i]);
                }

		}
		else{
                coada1.get_counter()=coada2.get_counter()-coada1.get_counter();
		}
		return coada1;
	}
}



int main(){
    int counter;
	Coada array[counter];
    int caz;
    cout<<"Selectati cazul:";
    cin>>caz;
     switch(caz) {
      case '1' : array.push(counter);break;
      case '2' : array.pop(counter);break;
      case '3' : array.top(counter);break;
      case '4' : array.operator+(counter);break;
      case '5' : array.operator-(counter);break;
      default :
         cout << "Eroare" << endl;
   }
   return 0;

}
