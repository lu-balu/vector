#include <iostream>

template <typename T>
class Vector {
	public:
		Vector (int mSize = 1) : sizeArr(0), maxSize(mSize), Arr(new int [mSize])
		{}

		void pushBack(T element);
		void pushFront(T element);
		void printInfo();
		void insert(int index, T element);
		void remove(int index);
		int size();
		int getElementByIndex (int index);

	private:
	    int *Arr;
	    int maxSize; //размер выделенной памяти max size
	    int sizeArr; //кол-во элементов
	    void checkAndResize ();
};

template <class T>
void Vector<T>::pushBack(T element) {
	checkAndResize();
	Arr [sizeArr] = element; 
	sizeArr++;
}

template <class T>
void Vector<T>::pushFront(T element) {
	checkAndResize();
	for(int i = sizeArr; i > 0; i--) {
		Arr [i] = Arr [i - 1];
	}
	Arr[0] = element;
	sizeArr++;		
}

template <class T>
void Vector<T>::printInfo(){
	for(int i = 0; i < sizeArr; i++){
		std::cout << Arr [i] << " ";
	}
	std::cout << std::endl;
}

template <class T>
void Vector<T>::insert(int index, T element){
	checkAndResize(); 
	for(int i = sizeArr; i > index; i--){
		Arr[i] = Arr[i - 1];
	}	
	Arr[index] = element;	
	sizeArr++;
}

template <class T>
void Vector<T>::remove(int index){
	for(int i = index; i < sizeArr; i++){
		Arr[i] = Arr[i + 1];
	}
	sizeArr--;
}

template <class T>
int Vector<T>::size() {
	return sizeArr;
}

template <class T>
int Vector<T>::getElementByIndex (int index){
	return Arr[index];
}

template <class T>
void Vector<T>::checkAndResize () {
if (sizeArr == maxSize) {
	int *p = new int [maxSize * 2];
	for(int i = 0; i < maxSize; i++) {	
		p[i] = Arr [i];
	}
	delete Arr;
	Arr = p;
	maxSize *= 2;
}
}