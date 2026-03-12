#include <iostream>
using namespace std;

class Torre {
	
private:
	int fila;      // posición vertical (1-8)
	int columna;   // posición horizontal (1-8)
	bool esNegra;  // true = negra, false = blanca
	
	// Verifica si el movimiento es recto (horizontal o vertical)
	bool validarMovimiento(int nFila, int nCol){
		if((fila == nFila || columna == nCol) && !(fila == nFila && columna == nCol))
			return true;
		return false;
	}
		
public:
			
			// Constructor: inicializa color y posición
			Torre(bool color, int fInicial, int cInicial){
				esNegra = color;
				fila = fInicial;
				columna = cInicial;
			}
			
			// Devuelve el símbolo de la torre
			string dibujar(){
				if(esNegra)
					return "[##]";
				else
					return "[TT]";
			}
				
				// Intenta mover la torre a la nueva posición
				void mover(int nFila, int nCol){
					
					// verificar que esté dentro del tablero
					if(nFila < 1 || nFila > 8 || nCol < 1 || nCol > 8){
						cout << ">>> ERROR: Posicion fuera del tablero." << endl;
						return;
					}
					
					// verificar si el movimiento es válido para una torre
					if(validarMovimiento(nFila,nCol)){
						fila = nFila;
						columna = nCol;
						
						cout << ">>> MOVIMIENTO EXIOSO: "
							<< dibujar() << " se ha desplazado." << endl;
					}
					else{
						cout << ">>> ERROR: Movimiento diagonal no permitido para la Torre." << endl;
					}
				}
					
					// Muestra el estado actual de la torre
					void imprimirEstado(){
						
						cout << dibujar() << " ";
						
						if(esNegra)
							cout << "Negra  ";
						else
							cout << "Blanca ";
						
						cout << "en Fila: " << fila << ", Col: " << columna << endl;
					}
};


int main(){
	
	Torre t1(false,1,1); // torre blanca
	Torre t2(true,8,8);  // torre negra
	
	int nFila, nCol;
	
	cout << "===========================================\n";
	cout << "          SISTEMA DE CONTOL: TORRE\n";
	cout << "===========================================\n\n";
	
	cout << "[ESTADO ACTUAL DEL TABLERO]\n";
	cout << "Pieza 1: ";
	t1.imprimirEstado();
	
	cout << "Pieza 2: ";
	t2.imprimirEstado();
	
	cout << "\n-------------------------------------------\n";
	cout << "MOVIMIENTO: Torre Blanca " << t1.dibujar() << endl;
	cout << "-------------------------------------------\n";
	
	cout << "Introduzca nueva Fila (1-8): ";
	cin >> nFila;
	
	cout << "Introduzca nueva Columna (1-8): ";
	cin >> nCol;
	
	cout << "\n>>> PROCESANDO...\n";
	
	t1.mover(nFila,nCol);
	
	cout << "\n-------------------------------------------\n";
	cout << "[NUEVO ESTADO DEL TABLERO]\n";
	
	cout << "Pieza 1: ";
	t1.imprimirEstado();
	
	cout << "Pieza 2: ";
	t2.imprimirEstado();
	
	cout << "===========================================\n";
}
