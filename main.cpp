#include <iostream>
#include "Grafo.cpp"  

int main() {
    // Creazione del grafo
    Grafo<std::string> grafo;

    // Aggiunta delle persone (nodi)
    grafo.aggiungiNodo("Alice");
    grafo.aggiungiNodo("Bob");
    grafo.aggiungiNodo("Charlie");
    grafo.aggiungiNodo("David");
    grafo.aggiungiNodo("Eva");

    // Aggiunta degli archi con i pesi (distanze tra le abitazioni delle persone)
    grafo.aggiungiArco("Alice", "Bob", 10);     
    grafo.aggiungiArco("Bob", "Charlie", 20);       
    grafo.aggiungiArco("Charlie", "David", 15);     
    grafo.aggiungiArco("David", "Eva", 25);       
    grafo.aggiungiArco("Eva", "Alice", 30);         

    // Visualizzazione del grafo (matrice di adiacenza)
    grafo.stampa();

    // Verifica se un nodo esiste
    std::cout << "\nEsiste il nodo 'Alice'? " << (grafo.verificaNodo("Alice") ? "Sì" : "No") << "\n";
    std::cout << "Esiste il nodo 'Frank'? " << (grafo.verificaNodo("Frank") ? "Sì" : "No") << "\n";

    // Verifica se esiste un arco tra due nodi
    std::cout << "\nEsiste un arco tra Alice e Bob? " << (grafo.verificaArco("Alice", "Bob") ? "Sì" : "No") << "\n";
    std::cout << "Esiste un arco tra Bob e Alice? " << (grafo.verificaArco("Bob", "Alice") ? "Sì" : "No") << "\n";

    // Verifica la connessione tra due nodi
    std::cout << "\nSono connessi Alice e Bob? " << (grafo.sonoConnessi("Alice", "Bob") ? "Sì" : "No") << "\n";
    std::cout << "Sono connessi Alice e Charlie? " << (grafo.sonoConnessi("Alice", "Charlie") ? "Sì" : "No") << "\n";

    // Trova l'arco con il peso minore da Alice
    grafo.arcoMinimo("Alice");

    // Rimozione di un nodo e dei suoi archi
    grafo.rimuoviNodo("Charlie");
    std::cout << "\nDopo la rimozione di Charlie:\n";
    grafo.stampa();

    // Rimozione di un arco specifico
    grafo.rimuoviArco("Alice", "Bob");
    std::cout << "\nDopo la rimozione dell'arco Alice-Bob:\n";
    grafo.stampa();

    // Aggiunta di un nuovo nodo e arco
    grafo.aggiungiNodo("Frank");
    grafo.aggiungiArco("Frank", "David", 40);  
    std::cout << "\nDopo l'aggiunta di Frank e l'arco Frank-David:\n";
    grafo.stampa();

   
    grafo.dijkstra("Alice");

    return 0;
}
