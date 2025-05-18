// E V I D E N C I A   P R O Y E C T O

// Matricula: A01660619
// Nombre:    JEFFRY JOHNSON

// L I B R E R I A S
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <tuple>
#include <unordered_map>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#define BITACORA_CSV "equipo10.csv"
using namespace std;


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  D E   C L A S E S

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// C L A S E   R E G I S T R O
class Registro {
    public:                     // METODOS 
        int puerto_origen, puerto_destino;
        string fecha, hora, IP_origen, nombre_origen, IP_destino, nombre_destino;

        Registro() {}                                                                                        // Constructor por defecto                               // Constructor de atributos 1
        Registro(string f, string h, string ipo, int po, string no, string ipd, int pd, string nd):          // Constructor de atributos 2
        fecha(f), hora(h) , IP_origen(ipo), puerto_origen(po), nombre_origen(no), IP_destino(ipd), puerto_destino(pd), nombre_destino(nd) {}
        string getFecha() const;                    
        string getHora() const;
        string getIP_Origen() const; 
        int getPuerto_Origen() const; 
        string getNombre_Origen() const; 
        string getIP_Destino() const;
        int getPuerto_Destino() const; 
        string getNombre_Destino() const; 
        friend ostream & operator << (ostream & os, const Registro & registro);                     // Sobrecarga de operador de inserción

        // ATRIBUTOS
        //int puerto_origen, puerto_destino;
        //string fecha, hora, IP_origen, nombre_origen, IP_destino, nombre_destino;

        // [FECHA]          -- 2 digclaveos(días), 1 digclaveo(meses), 4 digclaveos(años)
        // [HORA]           -- 2 digclaveos(horas), 2 digclaveos(minutos), 2 digclaveos(segundos)
        // [IP ORIGEN]      -- 4 digclaveos separados por Points (tres digclaveos maximo, por cada Point)
        // [PUERTO ORIGEN]  -- 5 digclaveos
        // [IP DESTINO]     -- 4 digclaveos separados por Points
        // [PUERTO DESTINO] -- 5 digclaveos
};


// C L A S E   F E C H A
class Fecha {
    private:
        int dia, mes, anio;// E V I D E N C I A   P R O Y E C T O

        // Matricula: A01660619
        // Nombre:    JEFFRY JOHNSON
        
        // L I B R E R I A S
        #include <iostream>
        #include <string>
        #include <sstream>
        #include <fstream>
        #include <vector>
        #include <stdlib.h>
        #include <algorithm>
        #include <tuple>
        #include <unordered_map>
        #include <string>
        #include <list>
        #include <stack>
        #include <queue>
        #include <set>
        #include <map>
        #define BITACORA_CSV "equipo10.csv"
        using namespace std;
        
        
        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        
        // I M P L E M E N T A C I O N  D E   C L A S E S
        
        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        
        // C L A S E   R E G I S T R O
        class Registro {
            public:                     // METODOS 
                int puerto_origen, puerto_destino;
                string fecha, hora, IP_origen, nombre_origen, IP_destino, nombre_destino;
        
                Registro() {}                                                                                        // Constructor por defecto                               // Constructor de atributos 1
                Registro(string f, string h, string ipo, int po, string no, string ipd, int pd, string nd):          // Constructor de atributos 2
                fecha(f), hora(h) , IP_origen(ipo), puerto_origen(po), nombre_origen(no), IP_destino(ipd), puerto_destino(pd), nombre_destino(nd) {}
                string getFecha() const;                    
                string getHora() const;
                string getIP_Origen() const; 
                int getPuerto_Origen() const; 
                string getNombre_Origen() const; 
                string getIP_Destino() const;
                int getPuerto_Destino() const; 
                string getNombre_Destino() const; 
                friend ostream & operator << (ostream & os, const Registro & registro);                     // Sobrecarga de operador de inserción
        
                // ATRIBUTOS
                //int puerto_origen, puerto_destino;
                //string fecha, hora, IP_origen, nombre_origen, IP_destino, nombre_destino;
        
                // [FECHA]          -- 2 digclaveos(días), 1 digclaveo(meses), 4 digclaveos(años)
                // [HORA]           -- 2 digclaveos(horas), 2 digclaveos(minutos), 2 digclaveos(segundos)
                // [IP ORIGEN]      -- 4 digclaveos separados por Points (tres digclaveos maximo, por cada Point)
                // [PUERTO ORIGEN]  -- 5 digclaveos
                // [IP DESTINO]     -- 4 digclaveos separados por Points
                // [PUERTO DESTINO] -- 5 digclaveos
        };
         integer Dia
        int getIntMes();                                    // Getter de integer Mes
        int getIntAnio();                                   // Getter de integer Anio
        string getStringFecha();                            // Getter de string fecha
};


// C L A S E   C O N E X I O N
class Conexion{
    private:
        int puerto;
        string IP;
        string nombre;
    public:
        Conexion(int, string, string);                             // Constructor de atributos   
        int getPuerto() const;                                     // Getter de integer Puerto             
        string getIP () const;                                     // Getter de string IP
        string getNombre() const;                                  // Getter de string Nombre

};


// C L A S E   C O N E X I O N E S   C O M P U T A D O R A
class ConexionesComputadora{
    private:
        string IP;
        string nombre;
        stack < Conexion > ConexionesEntrantes;
        list < Conexion > ConexionesSalientes;
    public:
        ConexionesComputadora() {}
        ConexionesComputadora(string, string);
        string getIP() const;
        string getNombre() const;
        stack < Conexion > getConexiones_Entrantes() const;
        list < Conexion > getConexiones_Salientes() const;
        void addConexiones_Entrantes(int, string, string); 
        void addConexiones_Salientes(int, string, string);
        string lastConexiones_Entrantes() const;
        size_t sizeConexiones_Entrantes() const;
        size_t sizeConexiones_Salientes() const;
};


// C L A S E   T R E E   N O D E
class TreeNode {
public:
    string nombre_destino;
    int conexiones;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string nombre_destino, int conexiones) : nombre_destino(nombre_destino), conexiones(conexiones), left(nullptr), right(nullptr) {}
};


// C L A S E   B S T
class BST { 
    private:
        TreeNode* root; 
        TreeNode* insert(TreeNode*, string, int);
        void Ascendant(TreeNode*, vector<pair<string, int>> & result);
    public:
        BST() : root(nullptr) {}
        void insert(string, int);
        TreeNode* reverse();
        void getTopNode(vector<pair<string, int>> & result, int); 
};

// C L A S E   G R A F O
class Grafo{
    private:
        unordered_map<string, list<Registro>> lista;
    public:
        Grafo(const vector<Registro>&);                                                 // Constructor
        vector<pair<string, int>> Dia_Conexion_Saliente(const vector<Registro>&, const string&) const; // Función para las conexiones salientes de la IP dada
        vector<pair<string, int>> Dia_Conexion_Entrante(const vector<Registro>&, const string&) const; // Función para las conexiones entrantes de la IP dada
        bool Vortex_Conexion_Entrante(const string&) const;                                           // Función que responde a la pregunta 2 vértice máximo
        
};

// C L A S E   G R A F O    S I T I O
class SiteGrafo{
    private:
        unordered_map<string, list<pair<string, string>>> lista;
    public:
        SiteGrafo(const vector<Registro>&);                                 // Constructor
        vector<pair<string, int>> Conexion_Dia(const string&) const;                 // Función para obtener las conexiones por día
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N   S E T T E R S  |  G E T T E R S  |  C O N S T R U C T O R E S

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// C O N S T R U C T O R   D E   A T R I B U T O S  F E C H A   1
Fecha::Fecha(int _dia, int _mes, int _anio) {          // Enteros -> Fecha
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

// C O N S T R U C T O R   D E   A T R I B U T O S  F E C H A   2
Fecha::Fecha(long fecha) {          // Lonng integer -> Fecha

    dia = (fecha / 1000000);
    mes = (fecha / 10000) - (dia * 100);
    anio = fecha - (dia * 1000000) - (mes * 10000);
}

// C O N S T R U C T O R   D E   A T R I B U T O S  C O N E X I O N
Conexion::Conexion(int puerto, string IP, string nombre){
    this->puerto = puerto;
    this->IP = IP;
    this->nombre = nombre;
}

// C O N S T R U C T O R   D E   A T R I B U T O S  C O N E X I O N E S   C O M P U T A D O R A
ConexionesComputadora::ConexionesComputadora(string IP, string nombre){
    this->IP = IP;
    this->nombre = nombre; 
}

// C O N S T R U C T O R   G R A F O
Grafo::Grafo(const vector < Registro > & registros){
    for(const auto & info : registros){
        string IP_Origen = info.getIP_Origen();
        string IP_Destino = info.getIP_Destino();
        
        // Por requisitos del reto debemos verificar que las IPs sean internas para así poder contabilizar sus conexiones
        if(IP_Origen.substr(0, 11) == "10.217.177." && IP_Destino.substr(0, 11) == "10.217.177."){
            lista[IP_Origen].push_back(info);
        }
    }
}

// C O N S T R U C T O R   G R A F O    S I T I O
SiteGrafo::SiteGrafo(const vector<Registro>& registros){
    for(const auto & info : registros){
        // Ahora en lugar de usar IPs usamos los nombres de los sitios web
        string nombre_origen = info.getNombre_Origen();
        string nombre_destino = info.getNombre_Destino();
        string fecha = info.getFecha();
        
        // Verificar que si hay un sitio web en destino y que el origen tenga .reto
        if(nombre_destino.find(".") != string::npos && nombre_origen.find(".reto.com") != string::npos){
            lista[nombre_destino].push_back(make_pair(nombre_origen, fecha));
        }
    }
}
// I N S E R T A R   N O D O   E N   A R B O L   B I N A R I O      (B S T)
TreeNode* BST::insert(TreeNode* node, string nombre_destino, int conexiones) {
    if (node == nullptr) {
        return new TreeNode(nombre_destino, conexiones);
    }

    if (conexiones < node->conexiones) {
        node->left = insert(node->left, nombre_destino, conexiones);
    } 

    else {
        node->right = insert(node->right, nombre_destino, conexiones);
    }

    return node;
}

// R E C O R R E R   D E   F O R M A   A S C E N D E N T E
void BST::Ascendant(TreeNode* node, vector<pair<string, int>>& result) {
    if (node == nullptr) { return; }

    // Recorrido de forma ascendente
    Ascendant(node->left, result);         
    result.push_back({node->nombre_destino, node->conexiones});
    Ascendant(node->right, result);
}

// I N S E R T A R   N O D O   E N   A R B O L   B I N A R I O      (B S T)
void BST::insert(string nombre_destino, int conexiones) {
    if (!nombre_destino.empty()) {
        root = insert(root, nombre_destino, conexiones);         // Insertar nodo en el arbol
    } else {
        cout << " " << endl;                                     // Mensaje de error
    }
}

//  E N C O N T R A R   N O D O   C O N   V A L O R   M A X I M O   (B S T)
TreeNode* BST::reverse() {
    TreeNode* current = root;                            // Nodo actual
    while (current && current->right) {
        current = current->right;
    }
    return current;
}

// A L M A C E N A R  V A L O R E S  M A S  A L T O S  D E L  A R B O L  (B S T)
void BST::getTopNode(vector<pair<string, int>>& result, int top) {
    vector<pair<string, int>> temporal;
    Ascendant(root, temporal);  
    result.clear();
    
    //VECTOR CON ELEMENTOS DEL BST
    sort(temporal.begin(), temporal.end(), [](const pair<string, int>& a, const pair<string, int>& b) { return a.second > b.second; });

    //LOS PRIMEROS N ELEMENTOS
    for (int i = 0; i < min(top, (int)temporal.size()); ++i) { result.push_back(temporal[i]); }
}

// S E T T E R   D E   C O N E X I O N E S   E N T R A N T E S      (C O M P U T A D O R A)
void ConexionesComputadora::addConexiones_Entrantes(int puerto, string IP, string nombre) {
    Conexion prueba(puerto, IP, nombre);
    ConexionesEntrantes.push(prueba);
}


// S E T T E R   D E   C O N E X I O N E S   S A L I E N T E S      (C O M P U T A D O R A)
void ConexionesComputadora::addConexiones_Salientes(int puerto, string IP, string nombre) {
    Conexion prueba(puerto, IP, nombre);
    ConexionesSalientes.push_back(prueba);
}


// S E T T E R   D E    I N T E G E R     F E C H A
void Fecha::setIntFecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

// S E T T E R   D E    S T R I N G     F E C H A
void Fecha::setStringFecha(int _dia, int _mes, int _anio){
    if (_dia < 10){
        s_dia = "0" + to_string(_dia);
    }
    else{
        s_dia = to_string(_dia);
    }
    if (_mes < 10){
        s_mes = "0" + to_string(_mes);
    }
    else{
        s_mes = to_string(_mes);
    }
    s_anio = to_string(_anio);
    
}



// G E T T E R   D E    I N T E G E R     D I A
int Fecha::getIntDia() { return dia; }


// G E T T E R   D E    I N T E G E R     M E S
int Fecha::getIntMes() { return mes; }


// G E T T E R   D E    I N T E G E R     A N I O   
int Fecha::getIntAnio() { return anio; }


// G E T T E R   D E    S T R I N G     F E C H A   
string Fecha::getStringFecha() { return s_dia + "/" + s_mes + "/" + s_anio; }


// G E T T E R   D E    I N T E G E R     P U E R T O   (C O N E X I O N)   
int Conexion::getPuerto() const { return puerto; }


// G E T T E R   D E    S T R I N G     I P (C O N E X I O N)
string Conexion::getIP () const { return IP; }


// G E T T E R   D E    S T R I N G     N O M B R E     (C O N E X I O N)
string Conexion::getNombre() const { return nombre; }


// G E T T E R  D E   F E C H A     (R E G I S T R O)
string Registro::getFecha() const { return fecha; }


// G E T T E R   D E   H O R A      (R E G I S T R O)
string Registro::getHora() const { return hora; }


//  G E T T E R   D E   I P   O R I G E N       (R E G I S T R O)
string Registro::getIP_Origen() const { return IP_origen; }


// G E T T E R   D E   P U E R T O   O R I G E N        (R E G I S T R O)
int Registro::getPuerto_Origen() const { return puerto_origen; }


// G E T T E R   D E   N O M B R E   O R I G E N        (R E G I S T R O) 
string Registro::getNombre_Origen() const { return nombre_origen; }


// G E T T E R   D E   I P   D E S T I N O       (R E G I S T R O)
string Registro::getIP_Destino() const { return IP_destino; }


// G E T T E R   D E   P U E R T O   D E S T I N O  (R E G I S T R O)
int Registro::getPuerto_Destino() const { return puerto_destino; }


// G E T T E R   D E   N O M B R E   D E S T I N O      (R E G I S T R O)
string Registro::getNombre_Destino() const { return nombre_destino; }


// G E T T E R   D E   I P      (C O M P U T A D O R A)
string ConexionesComputadora::getIP() const { return IP; }


// G E T T E R   D E   N O M B R E      (C O M P U T A D O R A)
string ConexionesComputadora::getNombre() const { return nombre; }


// G E T T E R   D E   C O N E X I O N E S   E N T R A N T E S      (C O M P U T A D O R A)
stack < Conexion > ConexionesComputadora::getConexiones_Entrantes() const { return ConexionesEntrantes; }


// G E T T E R   D E   C O N E X I O N E S   S A L I E N T E S      (C O M P U T A D O R A)
list < Conexion > ConexionesComputadora::getConexiones_Salientes() const { return ConexionesSalientes; }


// G E T T E R   D E   U L T I M A   C O N E X I O N   E N T R A N T E      (C O M P U T A D O R A)
string ConexionesComputadora::lastConexiones_Entrantes() const {
    if (!ConexionesEntrantes.empty()) { return ConexionesEntrantes.top().getIP(); } 
    else { return "No hay conexiones entrantes"; }
}


// G E T T E R   D E   T A M A N O   C O N E X I O N E S   E N T R A N T E S        (C O M P U T A D O R A)
size_t ConexionesComputadora::sizeConexiones_Entrantes() const { return ConexionesEntrantes.size(); }


// G E T T E R   D E   T A M A N O   C O N E X I O N E S   S A L I E N T E S        (C O M P U T A D O R A)
size_t ConexionesComputadora::sizeConexiones_Salientes() const { return ConexionesSalientes.size(); }


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  A C T I V I D A D  1 . 3

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// F U N C I O N  C O N V E R T I R   F E C H A
int convertirFecha(const string& fecha) {                   // verificar los parametros de entrada.
    string fecha_sin_slash = fecha;
    fecha_sin_slash.erase(remove(fecha_sin_slash.begin(), fecha_sin_slash.end(), '/'), fecha_sin_slash.end());
    return stoi(fecha_sin_slash);
}


// F U N C I O N  V E R I F I C A R   F E C H A
int verificarFecha(int dia, int mes, int anio) {           // verificar los parametros de entrada.

    if (dia < 0 || dia > 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11) || dia > 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) || dia > 28 && mes == 2 && anio % 4 != 0 || dia > 29 && mes == 2 && anio % 4 == 0){
        
        cout << "Dia no valido" << endl;    // Enero, Marzo, Mayo, Julio, Septiembre, Noviembre -> 31 días      (1, 3, 5, 7, 8, 10, 12)
        exit(0);
    }                                       // Abril, Junio, Agosto, Octubre, Diciembre         -> 30 días      (4, 6, 9, 11)
    else if (mes < 0 || mes > 12) {
        cout << "Mes no valido" << endl;    // Dia 11 / 08 / 2020  Registros [3298 - 6571]      -> 3273 Registros
        exit(0);
    }
    else if (anio < 0 || anio > 2021) {
        cout << "Año no valido" << endl;
        exit(0);
    }
    else {
        return dia, mes, anio;
    }       
}


// M O S T R A R   F E C H A
void Fecha::showDate() {
    cout << "La fecha es: " << dia << " | " << mes << " | " << anio << endl;
}

// F U N C I O N   A L M A C E N A R   D A T O S  V E C T O R   # 2
auto almacenarDatos(string filename) {
    vector < Registro > lineas;     // Vector de tipo Registro -> lineas
    ifstream archivo(filename);
    if(!archivo.is_open()) throw runtime_error("No se puede abrir el archivo");
    string linea;          // Definicion de variable que almacena cada linea y palabra
    while (getline(archivo, linea)) {
        stringstream registro(linea);

        // VARIABLES TEMPORALES
        string fecha;
        string hora;
        string IP_origen;
        int puerto_origen;
        string nombre_origen;
        string IP_destino;
        int puerto_destino;
        string nombre_destino;

        // LECTURA DE DATOS
        getline(registro, fecha, ',');
        getline(registro, hora, ',');
        getline(registro, IP_origen, ',');
        registro >> puerto_origen;
        registro.ignore();
        getline(registro, nombre_origen, ',');
        getline(registro, IP_destino, ',');
        registro >> puerto_destino;
        registro.ignore();
        getline(registro, nombre_destino, ',');

        lineas.push_back(Registro(fecha, hora, IP_origen, puerto_origen, nombre_origen, IP_destino, puerto_destino, nombre_destino));
        cout << endl;
    }
    archivo.close();

    return lineas;
}


// F U N C I O N   L E E R   D A T O S   C S V  #   1
void leercsv() {
    ifstream archivo(BITACORA_CSV);
    string linea, palabra;          // Definicion de variable que almacena cada linea y palabra

    while (getline(archivo, linea)) {
        stringstream registro(linea);

        while (getline(registro, palabra, ',')) {
            cout << palabra << " | ";
        }
        cout << endl;
    }
    archivo.close();
}


// F U N C I O N   B U S C A R   N O M B R E    # 3
void buscarNombre(const vector < Registro > & registros, const string & nombre) {
    bool encontrado = false;
    int counter = 0;

    for (const auto & registro : registros) {
        if (registro.nombre_origen == nombre) {
            encontrado = true;
            counter++;
        }
    }
    if (encontrado) {
        cout << "[SI] Se encontraron registros con el nombre " << nombre << " con la cantidad de [" << counter << "] Registros.\n" << endl;
    } else {
        cout << "[No] se encontraron registros con el nombre "<< nombre << " proporcionado \n" << endl;
    }
}


//  B U S C A R   F E C H A   B I N A R I A  # 4
tuple <int, int, int, string, int> busquedaBinariafecha(const vector < Registro > & registros, const string & fecha, int dia) {

    // VARIABLES
    int mitad, inf  = 0, sup  = registros.size() - 1, FirstReg_Date, Save_FirstReg_Date, cantidad_registros_dia = 0, ultima_fecha_long, last_dia, last_mes, last_anio;           
    string fecha_siguiente, fecha_anterior, fecha_actual;
    bool encontrado = false;

    // INICIO ALGORclaveMO BUSQUEDA BINARIA
    do { 
        mitad = (inf + sup) / 2;

        if (fecha > registros[mitad].fecha) {
            inf = mitad + 1;
            //cout << "Fecha a buscar MAYOR que la mclavead\n";                                                            // COUTS DE DEPURACIÓN
        }
        else if (fecha < registros[mitad].fecha) {
            sup = mitad - 1;
            //cout << "Fecha a buscar MENOR que la mclavead\n";
            //cout << "fecha = " << fecha << " | registros[mclavead].fecha = " << registros[mclavead].fecha << endl;          // COUTS DE DEPURACIÓN
        }
        else if (fecha == registros[mitad].fecha){
            fecha_actual = registros[mitad].fecha;
            encontrado = true;
            //cout << "Fecha encontrada !!! \n";
            break; 
        }

    }

    // FIN ALGORITMO BUSQUEDA BINARIA
    while (registros[mitad].fecha != fecha && inf <= sup);

    // FECHA A BUSCAR ENCONTRADA EN EL VECTOR
    if (encontrado) {
        //cout << "\nLa fecha a buscar ["  << fecha << "] fue encontrada en el índice -> " << mclavead << endl;    // mclavead -> Indice Entero

        // Verificar si el índice de FECHA ENCONTRADA, es distinto al primer y last elemento del vector
        if (mitad > 0 && mitad < registros.size() - 1){      
            int i_Fecha_sig = mitad + 1, i_First_Reg_Date = mitad;

            // Conversion de STRING a LONG del last día.
            ultima_fecha_long = convertirFecha(registros[registros.size()-1].fecha);

            // Creación objetos de tipo Fecha, para obtener el dia del last registro
            Fecha ultima_fecha(ultima_fecha_long);    
            last_dia = ultima_fecha.getIntDia();

            // Busqueda de la fecha siguiente
            while (i_Fecha_sig < registros.size() && registros[i_Fecha_sig].fecha == fecha_actual) {
                i_Fecha_sig++;
            }

            // FECHA A BUSCAR ES DIFERENTE AL last DIA DE LA ULTIMA FECHA DEL VECTOR
            if (dia != last_dia) {
                fecha_siguiente = registros[i_Fecha_sig].fecha;
                //cout << "\nLa fecha siguiente es: [" << fecha_siguiente  << "] encontrada en el indice -> " << i_Fecha_sig << endl << endl;

                // Busqueda primer Registro [indice] del dia a Buscar
                while(fecha == registros[i_First_Reg_Date].fecha && i_First_Reg_Date > 0){          // i_First_Reg_Date == indice mclavead
                    i_First_Reg_Date -= 1;
                    //cout << "La fecha es -> " << fecha << "y la fecha en busqueda actual es -> " << registros[j].fecha << "con indice -> " << j << endl;
                }

                // CASO FECHA A BUSCAR ES IGUAL AL PRIMER REGISTR0 DEL VECTOR
                if (fecha == registros[0].fecha){
                    FirstReg_Date = 0;
                    Save_FirstReg_Date = FirstReg_Date;
                    //cout << "Primer Registro del dia: [" << fecha << "] encontrado en el indice -> " << FirstReg_Date << " del vector \n"<< endl;
                }

                else{
                    FirstReg_Date = i_First_Reg_Date + 1;
                    Save_FirstReg_Date = FirstReg_Date;
                    //cout << "Primer Registro del dia: [" << fecha << "] encontrado en el indice -> " << FirstReg_Date << " del vector \n"<< endl;
                }
                
                // Cantidad de registros del dia a Buscar
                while(fecha == registros[FirstReg_Date].fecha && FirstReg_Date < registros.size()){
                    FirstReg_Date += 1;
                    cantidad_registros_dia += 1;
                    //cout << "La fecha es -> " << fecha << " y la fecha en busqueda actual es -> " << registros[FirstReg_Date].fecha << "con indice -> " << FirstReg_Date << "contador -> " << cantidad_registros_dia<< endl;
                }

                //cout << "Cantidad de registros del dia: [" << fecha << "] son -> " << cantidad_registros_dia - 1 << endl << endl;
                //cout << "\nIndice Fecha Siguiente -> " << i_Fecha_sig << " | Primer Registro del Dia -> " << Save_FirstReg_Date << " | Cantidad de Registros del Dia -> " << cantidad_registros_dia - 1 << endl << endl;

                return make_tuple(i_Fecha_sig, Save_FirstReg_Date, cantidad_registros_dia - 1, fecha_siguiente, mitad);  //indice_fecha_siguiente, guardar_fecha_primer_registro, cantidad_registros_dia - 1;
            }

            // DIA A BUSCAR ES  IGUAL AL last DIA DE LA ULTIMA FECHA DEL VECTOR
            else {
                cout << "\nLa fecha a Buscar es la ULTIMA fecha del vector." << endl << endl;
            }
        }

        else {
            cout << "\nLa fecha a Buscar es el PRIMER / last elemento del Vector." << endl << endl;
        }
    }

    // FECHA A BUSCAR NO ENCONTRADA EN EL VECTOR
    else {
        cout << "\nLa fecha a buscar " << fecha << " [NO] fue encontrada en el vector.\n" << endl;
        exit(0);
    }
}

// F U N C I O N   B U S C A R   M A I L
void buscarMail(const vector < Registro > & registros, const string & nombre_destino) {
    bool encontrado = false;
    int counter = 0;

    for (const auto & registro : registros) {
        if (registro.nombre_destino == nombre_destino) {
            encontrado = true;
            counter++;
        }
    }
    
    if (encontrado) {
        cout << "[SI] Se encontraron registros con el nombre " << nombre_destino << " con la cantidad de [" << counter << "] Registros." << endl;
    } else {
        cout << "[No] se encontraron registros con el nombre "<< nombre_destino << " proporcionado " << endl;
    }
    cout << endl;
}

// F U N C I O N   B U S C A R   I D  C O M P A N I A
void buscarIdCompania(const vector < Registro > & registros, const string& nombre_origen) {
    for (const auto& registro : registros) {
        // Obtener el índice del primer Point en el nombre_origen
        size_t firstDotIndex = registro.nombre_origen.find('.');
        if (firstDotIndex != string::npos) {
            // Obtener el substring desde el primer Point hasta el final
            string domain = registro.nombre_origen.substr(firstDotIndex);
            // Verificar si el substring es igual a ".reto.com"
            if (domain == ".reto.com") {
                // Obtener el índice del tercer Point en el ip_origen
                size_t thirdDotIndex = registro.IP_origen.find('.', registro.IP_origen.find('.', registro.IP_origen.find('.') + 1) + 1);
                if (thirdDotIndex != string::npos) {
                    // Obtener el substring desde el inicio hasta el tercer Point
                    string ip = registro.IP_origen.substr(0, thirdDotIndex);
                    cout << "ID Compania: " << ip << endl << endl;
                    return;
                }
            }
        }
    }
    cout << "No se encontró ninguna ID Compania." << endl;
}

// F U N C I O N   V E R I F I C A R   P U E R T O   D E S T I N O
void verificarPuertos(const vector < Registro > & registros) {
    unordered_map<string, int> services_count;
    vector<string> services_less_thousand;

    for (const auto& registro : registros) {
        if (registro.puerto_destino < 1000 && !registro.nombre_destino.empty()) {
            services_count[registro.nombre_destino]++;
            if (find(services_less_thousand.begin(), services_less_thousand.end(), registro.nombre_destino) == services_less_thousand.end()) {
                services_less_thousand.push_back(registro.nombre_destino);
            }
        }
    }

    cout << "Servicios encontrados con puertos destino menores a 1000:" << endl;
    for (const auto& service : services_less_thousand) {
        cout << "Servicio: " << service << " - Cantidad: " << services_count[service] << endl;
    }
}

//  F U N C I O N  P U E R T O S   <  1 0 0 0
void VerificarPuertosMil(const vector < Registro > & registros) {
    unordered_map < string, int > services_count;
    vector < string > services_less_thousand;

    for (const auto& registro : registros) {
        if (registro.puerto_destino < 1000 && !registro.nombre_destino.empty()) {
            services_count[registro.nombre_destino]++;
            if (find(services_less_thousand.begin(), services_less_thousand.end(), registro.nombre_destino) == services_less_thousand.end()) {
                services_less_thousand.push_back(registro.nombre_destino);
            }
        }
    }

    cout << "Servicios encontrados con puertos destino menores a 1000:" << endl;
    for (const auto& service : services_less_thousand) {
        cout << "Servicio: " << service << " - Cantidad: " << services_count[service] << endl;
    }
}

// S O B R E C A R G A   D E   O P E R A D O R  I N S E R C I O N  
ostream & operator << (ostream & os, const Registro & registro)

{
    os << registro.fecha << " | ";
    os << registro.hora << " | ";
    os << registro.IP_origen << " | ";
    os << registro.puerto_origen << " | ";
    os << registro.nombre_origen << " | ";
    os << registro.IP_destino << " | ";
    os << registro.puerto_destino << " | ";
    os << registro.nombre_destino << " | ";
    os << endl;
    return os;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  A C T I V I D A D  2 . 2

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// F U N C I O N   I P   U S U A R I O
string IP_Usuario(vector <Registro> & registros, int number) {
    for(auto & registro : registros){               // Buscar el primer Point de la dirección IP Origen
        string Origin_Name = registro.getNombre_Origen();
        string Origin_IP = registro.getIP_Origen();

        // Encontrar la posición de last point
        size_t Point = Origin_IP.find_last_of('.');
        size_t last_Point = Origin_IP.find_last_of('.', Point - 1);

        // Verificar la terminación "reto.com"
        if (Point != string::npos && last_Point != string::npos && Origin_Name.substr(last_Point + 1) == "reto.com" && Origin_IP != "-") {
            
            // Completar la IP con el numero proporcionado
            string new_IP = Origin_IP.substr(0, Point + 1) + to_string(number);
            return new_IP;
        }
    }
    
    return "La dirección IP no pudo ser encontrada";
}

// F U N C I O N   C O N E X I O N E S   E N T R A N T E S  Y   S A L I E N T E S
void Conexiones_IN_OUT(vector <Registro> registros, ConexionesComputadora & conexion) {
    for(int i=0; i < registros.size(); i++){
        if( registros[i].getIP_Destino() == conexion.getIP()) {
            conexion.addConexiones_Entrantes(registros[i].getPuerto_Origen(),registros[i].getIP_Origen(), registros[i].getNombre_Origen() );
        } 

        else if( registros[i].getIP_Origen() == conexion.getIP() ){
            conexion.addConexiones_Salientes(registros[i].getPuerto_Destino(),registros[i].getIP_Destino(), registros[i].getNombre_Destino() );
        } 
    }
}

// F U N C I O N   B U S C A R  I P  C O M P A N I A
string Find_IP_Compania(vector < Registro > & registros) {
    for( auto & registro : registros){          //BUSCAR EL PRIMER PUNTO DE NOMBRE ORIGEN 
        string Origin_Name = registro.getNombre_Origen();
        string Origin_IP = registro.getIP_Origen();

        // BUSCAR LA POSICION
        size_t Punto = Origin_Name.find('.');

        // Verificar la terminación "reto.com"
        if (Punto != string::npos && Origin_Name.substr(Punto + 1) == "reto.com" && Origin_IP != "-") {
            size_t last = Origin_IP.find_last_of('.');
            string new_IP = Origin_IP.substr(0, last);

            return new_IP;
        }

    }

    return "La dirección no fue encontrada"; 
}

// F U N C I O N   I N C I D E N C I A   C O N E X I O N E S
bool Incidences(ConexionesComputadora & conexion) {
    if(conexion.sizeConexiones_Salientes() < 3){      // Verificar si hay menos de 3 conexiones salientes
        return false;
  }

    // CASO MAYOR A 3 CONEXIONES SALIENTES
    auto ConexionesSalientes = conexion.getConexiones_Salientes();
    auto First_Conection = ConexionesSalientes.begin();                    // claveerador para el primer elemento
    auto Second_Conection = next (First_Conection, 1);                     // funcion next para avanzar un elemento
    auto Third_Conection = next(Second_Conection, 1);                      // funcion next para avanzar un elemento

    for(size_t i = 0; i < conexion.sizeConexiones_Salientes() - 2; ++i){    // Recorrer la lista de conexiones salientes
        if (First_Conection->getNombre() == Second_Conection->getNombre() &&  Second_Conection->getNombre() == Third_Conection->getNombre()) return true;
        advance (First_Conection, 1);   
        advance(Second_Conection, 1);
        advance(Third_Conection, 1);
    }

    return false;
}

// F U N C I O N   C O N E X I O N E S   S A L I E N T E S
void show_Conexiones(const ConexionesComputadora & computadora) {
    cout << "Conexiones de entrada al equipo -> [" << computadora.getIP() << "]" << endl;
    stack < Conexion > conexionesEntrantes = computadora.getConexiones_Entrantes();

    while (!conexionesEntrantes.empty()) {      // Verificar si la pila de conexiones entrantes no está vacía
        Conexion try_conection = conexionesEntrantes.top();
        cout << "\nIP_Origen: " << try_conection.getIP() << endl;
        cout << "Puerto: " << try_conection.getPuerto() << endl;
        cout << "Nombre: " << try_conection.getNombre() << endl << endl;
        conexionesEntrantes.pop();
    }

    // Mostrar conexiones salientes
    cout << "Conexiones de Salida al equipo -> [" << computadora.getIP() << "]" << endl;
    list < Conexion > ConexionesSalientes = computadora.getConexiones_Salientes();
    for (const auto& conexion : ConexionesSalientes) {
        cout << "\nDestino: " << conexion.getIP() << endl;
        cout << "Puerto: " << conexion.getPuerto() << endl;
        cout << "Nombre: " << conexion.getNombre() << endl << endl;
    }
}



//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  A C T I V I D A D  3 . 2

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// F U N C I O N   C O N E X I O N E S   P O R   D I A
map <string, int> conexionesPorDia(const string& fecha, const vector < Registro > & data) {
    map<string, int> Cantidad_Conexiones; 
    for (const auto & data : data) {
        if (data.getFecha() == fecha) { 
            if (data.getNombre_Destino().find(".reto.com") == string :: npos && data.getNombre_Destino().find("-") == string::npos) {
                Cantidad_Conexiones[data.getNombre_Destino()]++; 
            }
        }
    }

    return Cantidad_Conexiones; 
}
/*
// F U N C I O N   I M P R I M I R   M A P A
void printMap(const map<string, int>& Cantidad_Conexiones) {
    for(auto clave = Cantidad_Conexiones.begin(); clave != Cantidad_Conexiones.end(); ++clave) {
        if (!clave -> first.empty() && clave -> first != "-") {   // Verificar si la clave no está vacía
            cout << clave -> first << " " << clave -> second <<endl;
        }
    }
}
*/
// F U N C I O N   T O P   5   S I T I O S   C O N E X I O N A D O S
void top(int cantidad, const vector < Registro > & registros) {
    set < string > Fechas_sin_repetir;
    for (const auto & info : registros) {
        Fechas_sin_repetir.insert(info.getFecha());
    }

    // Implementación de la funcion ConexionesPorDia
    for (const auto & fecha : Fechas_sin_repetir) {
        map < string, int > Cantidad_Conexiones = conexionesPorDia(fecha, registros);
        BST Object_BST;

        for (const auto & var : Cantidad_Conexiones) {
            Object_BST.insert(var.first, var.second);
        }

        // DESPLEGAR EL TOP 5 DE CONEXIONES POR DIA
        cout << "Top " << cantidad << " conexiones por día son -> " << fecha  << endl;

        vector < pair < string, int > > Top_Sitios_WEB;
        
        //ALMACENAR EL TOP 5 CON MAS CONEXIONES
        Object_BST.getTopNode(Top_Sitios_WEB, cantidad);

        //ORDENAR LOS SITIOS
        sort(Top_Sitios_WEB.begin(), Top_Sitios_WEB.end(), [](const pair < string, int > & x, const pair < string, int > & y) { return x.second > y.second; });

        //  DESPLEGAR EL TOP 5 DE CONEXIONES POR DIA
        for (const auto & sitio : Top_Sitios_WEB) {
            if (!sitio.first.empty()) {         // Verificar que el sitio no está vacío
                cout <<"Sitio | Servicio -> "<< sitio.first << " : " << sitio.second << endl;
            }
        }

    }
}

//  F U N C I O N   T O P   5   T O D O S   L O S   D I A S
bool Top_Days(const vector < Registro > & registros) {
    unordered_map < string, int >  Contador_Top_5;      // CONTADOR
    set < string >  Cantidad_Dias;                      // ALMACENAR EN UN SET TODAS LAS FECHAS

    //OBTENER TODAS LAS FECHAS
    for (const auto & dato : registros) {
        Cantidad_Dias.insert(dato.getFecha());
    }

    // ITERACION SOBRE TODAS LAS FECHAS
    for (const auto & fecha : Cantidad_Dias) {
        map < string, int > Repeticiones = conexionesPorDia(fecha, registros);
        for (const auto & cont : Repeticiones) {
            Contador_Top_5[cont.first]++;
        }
    }

    // VERIFICAR SI ALGUN SITIO ESTUVO EN EL TOP 5 DE TODOS LOS DIAS
    for (const auto & site : Contador_Top_5) {
        if (site.second == Cantidad_Dias.size()) { return true; }
    }

    return false; 
}

// F U N C I O N   T R A F F I C
string Traffic(const vector < Registro > & registros) {
    unordered_map < string, int >  Numero_Conexiones;

    // VERIFICAR NUMERO DE CONEXIONES POR SITIO
    for (const auto& dato : registros) {
        Numero_Conexiones[dato.getNombre_Destino()]++;
    }

    // SITIO CON MAYOR CONEXIONES
    string Traffic_Site;
    int Conexiones_Maximas = 0;
    for (const auto & info : Numero_Conexiones) {
        if (info.second > Conexiones_Maximas) {
            Conexiones_Maximas = info.second;
            Traffic_Site = info.first;
        }
    }

    return Traffic_Site;
}

// F U N C I O N   T O P   N E X T   D A Y S
string Top_Next_Days(const vector < Registro > & registros) {
    unordered_map < string, bool > Top_5_Days; //ALMACENAR LOS SITIOS EN EL DIA

    //ITERAR EN TODAS LAS FECHAS 
    for (const auto & info : registros) {
        string fecha = info.getFecha();

        if (Top_5_Days.empty()) {
            map < string, int > Numero_Conexiones = conexionesPorDia(fecha, registros); // TOP 5 DIA UNO
            BST Object_BST;
            //CREAR UN OBJETO BST PARA INSERTAR LOS DATOS Y HCER LA COMPARACION

            for (const auto& par : Numero_Conexiones) {
                Object_BST.insert(par.first, par.second);
            }

            vector < pair < string, int > > topSites;
            Object_BST.getTopNode(topSites, 5); //OBTENER DATA DE LOS SITIOS EN TOP DIA UNO

            for (const auto& site : topSites) {
                Top_5_Days[site.first] = true;
            }
        } 
        
        else {
            // CALCULA EL TOP 5 PARA LOS DIAS QUE SIGUEN
            map < string, int > Numero_Conexiones = conexionesPorDia(fecha, registros);
            BST Object_BST;

            for (const auto & cont : Numero_Conexiones) {
                Object_BST.insert(cont.first, cont.second);
            }

            vector < pair < string, int > > Top_Sitios;
            Object_BST.getTopNode(Top_Sitios, 5);

            unordered_map < string, bool > Top_5_Next; 

            //VERIFICAR SI UN SITIO ESTA EN EL TOP 5 DESPUES DE LOS DIAS
            for (const auto & site : Top_Sitios) {
                if (Top_5_Days.find(site.first) != Top_5_Days.end()) {
                    Top_5_Next[site.first] = true;
                }
            }

            // VERIFICAR SI UN SITIO ESTA EN EL TOP 5 DESPUES DE LOS DIAS
            bool Top_5_Later = true; //SITIOS EN EL TOP DESPUES DEL DIA 
            for (const auto& sitio : Top_5_Days) {
                if (Top_5_Next.find(sitio.first) == Top_5_Next.end()) {
                    Top_5_Later = false;
                    break;
                }
            }

            if (Top_5_Later) { return Top_Sitios[0].first; }    //SI UN SITIO ESTA EN EL TOP 5 DESPUES DE LOS DIAS
        }
    }

    return ""; 
    
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  A C T I V I D A D  4 . 2

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// F U N C I Ó N   P A R A   L A S   C O N E X I O N E S   S A L I E N T E S   D E   L A   I P   D A D A
vector < pair < string, int > > Grafo::Dia_Conexion_Saliente(const vector < Registro > & registros, const string& IP) const{
    unordered_map < string, int > ConexionDia;
    
    // Aquí verificamos que la IP origen sea igual a la IP dada y que la IP destino sea interna
    for(const auto & info : registros){
        if(info.getIP_Origen() == IP && info.getIP_Destino().substr(0, 11) == "10.217.177."){
            ConexionDia[info.getFecha()]++;
        }
    }
    
    // Vector para almacenar las conexiones por día
    vector < pair < string, int > > CPD;
    for(auto i = ConexionDia.begin(); i != ConexionDia.end(); ++i){
        CPD.push_back(*i);
    }
    
    return CPD;
}

// F U N C I Ó N   P A R A   L A S   C O N E X I O N E S   E N T R A N T E S   D E   L A   I P   D A D A
vector < pair < string, int > > Grafo::Dia_Conexion_Entrante(const vector < Registro > & registros, const string& IP) const{
    unordered_map < string, int > ConexionDia;
    
    // Misma lógica que la función pasada pero ahora para las conexiones entrantes con modificaciones
    for(const auto & info : registros){
        if(info.getIP_Destino() == IP && info.getIP_Origen().substr(0, 11) == "10.217.177."){
            ConexionDia[info.getFecha()]++;
        }
    }
    
    vector < pair < string, int > > CPD;
    for(auto i = ConexionDia.begin(); i != ConexionDia.end(); ++i){
        CPD.push_back(*i);
    }
    
    return CPD;
}

// F U N C I Ó N   Q U E   R E S P O N D E   A   L A   P R E G U N T A   2   V É R T I C E   M Á X I M O
bool Grafo::Vortex_Conexion_Entrante(const string & IP) const{
    auto IP_Lista = lista.find(IP); // Buscamos la IP en la lista
    if(IP_Lista != lista.end()){
        int Conexiones_Max = 0; // Inicializamos una variable para almacenar el número de conexiones
        int ConexionesIP = IP_Lista->second.size();
        for(auto IP_Lista = lista.begin(); IP_Lista != lista.end(); ++IP_Lista){
            if(IP_Lista->second.size() > Conexiones_Max){ // Se compara el tamaño de la lista para ver qué vértice tiene más conexiones
                Conexiones_Max = IP_Lista->second.size();
            }
        }
        return ConexionesIP >= Conexiones_Max;
    }
    return false;
}

// F U N C I Ó N   P A R A   O B T E N E R   L A S   C O N E X I O N E S   P O R   D Í A
vector < pair < string, int > > SiteGrafo::Conexion_Dia(const string& sitio) const{
    unordered_map<string, int> Conexion_Dia;
    
    auto i = lista.find(sitio);   // Se busca el sitio en este caso ya sea B o C y se va iterando en la lista
    if(i!= lista.end()){         // Se extrae la fecha si se encuentra el sitio que se está buscando
        for(const auto& conexion : i->second){
            string fecha = conexion.second;
            Conexion_Dia[fecha]++;                // Incrementamos el contador
        }
    }
    
    // Vector que almacena los resultados de conexiones y fechas
    vector < pair < string, int > > result;
    for(auto i = Conexion_Dia.begin(); i != Conexion_Dia.end(); ++i){
        result.push_back(*i);
    }
    
    return result;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I M P L E M E N T A C I O N  A C T I V I D A D  5 . 2

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// F U N C I Ó N   Q U E   A G R E G A   A   U N   C O N J U N T O   D E   S T R I N G S   A  E Q U I P O S  E X T E R N O S
void Conjunto_Mapa(const vector<Registro>& registros, set<string>& Nombres_No_Reto, map<string, string>& Mapa_Inverso){
    for(const auto& dato : registros){
        string Nombre_Origen = dato.getNombre_Origen();
        string Nombre_Destino = dato.getNombre_Destino();
        string IP_Origen = dato.getIP_Origen();
        string IP_Destino = dato.getIP_Destino();

        if(Nombre_Origen.find(".reto.com") == string::npos && !Nombre_Origen.empty() && Nombre_Origen != "-"){
            Nombres_No_Reto.insert(Nombre_Origen);
            Mapa_Inverso[Nombre_Origen] = IP_Origen;
        }
        if(Nombre_Destino.find(".reto.com") == string::npos && !Nombre_Destino.empty() && Nombre_Destino != "-"){
            Nombres_No_Reto.insert(Nombre_Destino);
            Mapa_Inverso[Nombre_Destino] = IP_Destino;
        }
    }
}

// C R E A  C I O N    D I C C I O N A R I O   D E   C O N E X I O N E S   C O N   I N F O   D E   L A S   C O N E X I O N E S
map<string, ConexionesComputadora> Crear_Diccionario(const vector<Registro>& registros){
    map<string, ConexionesComputadora> Diccionario;
    for(const auto& info : registros){
        string IP_Origen = info.getIP_Origen();
        string Nombre_Origen = info.getNombre_Origen();
        string IP_Destino = info.getIP_Destino();
        string Nombre_Destino = info.getNombre_Destino();
        int Puerto_Origen = info.getPuerto_Origen();
        int Puerto_Destino = info.getPuerto_Destino();

        if(Diccionario.find(IP_Origen) == Diccionario.end()){
            Diccionario[IP_Origen] = ConexionesComputadora(IP_Origen, Nombre_Origen);
        }
        if(Diccionario.find(IP_Destino) == Diccionario.end()){
            Diccionario[IP_Destino] = ConexionesComputadora(IP_Destino, Nombre_Destino);
        }

        Diccionario[IP_Origen].addConexiones_Salientes(Puerto_Destino, IP_Destino, Nombre_Destino);
        Diccionario[IP_Destino].addConexiones_Entrantes(Puerto_Origen, IP_Origen, Nombre_Origen);
    }

    return Diccionario;
}

// F U N C I Ó N    D I C C I O N A R I O   P A R A   C O N T E O  D E   C O N E X I O N E S   E N T R A N T E S
int Conexiones_Internas(const map<string, ConexionesComputadora>& Diccionario){
    int Contador = 0;
    for(const auto& par : Diccionario){
        string IP = par.first;
        const ConexionesComputadora& Conexiones = par.second;

        // Ahora ver que empiecen con 10.217.177. IP interna
        if(IP.find("10.217.177.") == 0){
            if(Conexiones.sizeConexiones_Entrantes() > 0){
                Contador++; // Incrementamos el contador para saber cuantas conexiones son
            }          
        }
    }

    return Contador;
}

// V E C T O R   I P S   D E   L A S   C O N E X I O N E S   E N T R A N T E S   D E   E Q U I P O S   S E L E C C I O N A D O S
vector<string> Unique_IPs(const map<string, ConexionesComputadora>& Diccionario, const vector<string>& IPs){
    set<string> Unique_IP;
    for(const auto & IP : IPs){
        auto i = Diccionario.find(IP);
        if(i != Diccionario.end()){
            stack<Conexion> CE = i->second.getConexiones_Entrantes();
            while(!CE.empty()){
                Unique_IP.insert(CE.top().getIP());
                CE.pop();
            }
        }
    }
    
    return vector<string>(Unique_IP.begin(), Unique_IP.end());
}

// F U N C I O N   V E R I F I C A C I O N   I P S   A N T E R I O R E S   C O N E X I O N   C O N   S I T I O   A N O M A L O
bool Conexion_Sitio_Anomalo(const string& IP, const map<string, ConexionesComputadora>& Diccionario, const string& Sitio_Anomalo){
    auto i = Diccionario.find(IP);
    if(i != Diccionario.end()){
        stack<Conexion> CE = i->second.getConexiones_Entrantes();
        while(!CE.empty()){
            if(CE.top().getNombre() == Sitio_Anomalo){
                return true;
            }
            CE.pop();
        }

        // Conexiones salientes
        list<Conexion> CS = i->second.getConexiones_Salientes();
        for(const auto& Conexion : CS){
            if(Conexion.getNombre() == Sitio_Anomalo){
                return true;
            }
        }
    }
    return false;
}

// V E R I F I C A C I O N    I P S   C O N E X I O N   C O N    S I T I O   |    G U A R D A D O    E N   E L   C O N J U N T O   P A R A  S U   I M P R E S I O N
void IPs_Sitio_Anomalo(const vector<string>& IPs, const map<string, ConexionesComputadora>& Diccionario, const string& Sitio_Anomalo, set<string>& IP_Set){
    for(const auto& IP : IPs){
        if(Conexion_Sitio_Anomalo(IP, Diccionario, Sitio_Anomalo)){
            cout << "La IP " << IP << " ha tenido comunicación con el sitio anómalo " << Sitio_Anomalo << endl;
            IP_Set.insert(IP); 
        }
    }
}

// F U N C I O N   F E C H A   C O M U N I C A C I O N  E N T R E   L A S   I P S   D E L   P A S O   1   Y   4

void Fecha_Comunicacion(const vector<Registro>& registros, const set<string>& IPs_Paso1, const set<string>& IPs_Paso4, const unordered_map<int, string>& Puerto_Protocolo){
    string Fecha_Primera_Comunicacion;
    string Protocolo;

    // Recorremos el vector
    for(const auto& dato : registros){
        string IP_Origen = dato.getIP_Origen();
        string IP_Destino = dato.getIP_Destino();
        string Fecha = dato.getFecha();
        string Hora = dato.getHora();
        int Puerto = dato.getPuerto_Destino(); 

        // Vamos comparando las fechas para encontrar la primera conexión
        if(IPs_Paso1.find(IP_Origen) != IPs_Paso1.end() && IPs_Paso4.find(IP_Destino) != IPs_Paso4.end()){
            if(Fecha_Primera_Comunicacion.empty() || (Fecha + Hora < Fecha_Primera_Comunicacion)){
                Fecha_Primera_Comunicacion = Fecha;
                if(Puerto_Protocolo.find(Puerto) != Puerto_Protocolo.end()){
                    Protocolo = Puerto_Protocolo.at(Puerto);
                }else{
                    Protocolo = "No encontrado";
                }
            }
        }
    }

    // Si se encuentra la fecha se imprime
    if(!Fecha_Primera_Comunicacion.empty()){
        cout << "La primera comunicación entre las IPs del paso 1 y 4 ocurrió el " << Fecha_Primera_Comunicacion  << " usando el protocolo " << Protocolo << endl;
    }else{
        cout << "No se encontró comunicación entre las IPs del paso 1 y 4" << endl;
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Función main
void menu() {
    string Archivo = "equipo10.csv";
    vector < Registro > registros = almacenarDatos(BITACORA_CSV);
    int opcion;

    do {
        cout << "\nMENU DE OPCIONES" << endl;
         cout << "Selecciona la opcion a consultar: \n" << endl;
        cout << "[1] - Implementacion Actividad 1.3" << endl;
        cout << "[2] - Implementacion Actividad 2.2" << endl;
        cout << "[3] - Implementacion Actividad 3.2" << endl;
        cout << "[4] - Implementacion Actividad 4.2" << endl;
        cout << "[5] - Implementacion Actividad 5.2" << endl;
        cout << "\nIngrese una opción: " << endl;
        cin >> opcion;

        //  A C T I V I D A D   1 . 3
        if (opcion == 1) {                                    
            cout << "[1]    - CUANTOS REGISTROS TIENE TU ARCHIVO CSV? " << endl;
            string size = to_string(registros.size());                                                  // 38,305 Registros
            cout << "El vector tiene una cantidad de: " << size << " Registros \n"<< endl;

            cout << "[2]    - CUANTOS REGISTROS HAY DEL SEGUNDO DÍA REGISTRADO? QUE DÍA ES ESTE? " << endl;
            cout << "Tomando en cuenta el día [10/08/2020] se buscaran los registros del día siguiente [11/08/2020] \n" << endl;
            string fecha_buscar, next_date;
            int dia = 11, mes = 8, anio = 2020, fecha_siguiente, cantidad_registros_dia, ifs, prd, crd, m;

            // Creación de objeto de tipo Fecha
            Fecha prueba(dia, mes, anio);
            prueba.setStringFecha(dia, mes, anio);
            fecha_buscar = prueba.getStringFecha();

            tie(ifs, prd, crd, next_date, m) = busquedaBinariafecha(registros, fecha_buscar, dia);
            
            cout << "La Fecha buscada   es:    [" << fecha_buscar << "]     encontrada en el indice ->      " << m << endl;
            cout << "La Fecha siguiente es:    [" << next_date << "]     encontrada en el indice ->      " << ifs << endl;
            cout << "Primer Registro del dia:  [" << fecha_buscar << "]     encontrado en el indice ->      " << prd << endl;
            cout << "Cantidad de Registros:    [" << crd << "]           encontrados en el Vector \n" << endl;

            cout << "[3]    - ALGUNO DE LOS EQUIPOS PERTENECE A JEFFREY? " << endl;
            string nombre0 = "jeffrey.reto.com", nombre1 = "betty.reto.com", nombre2 = "katherine.reto.com", nombre3 = "scott.reto.com", nombre4 = "benjamin.reto.com", nombre5 = "samuel.reto.com", nombre6 = "raymond.reto.com";
            buscarNombre(registros, nombre0);

            cout << "[3.1]  - ALGUNO DE LOS EQUIPOS PERTENECE A BETTY? " << endl;
            buscarNombre(registros, nombre1);

            cout << "[3.2]  - ALGUNO DE LOS EQUIPOS PERTENECE A KATHERINE? " << endl;
            buscarNombre(registros, nombre2);

            cout << "[3.3]  - ALGUNO DE LOS EQUIPOS PERTENECE A SCOTT? " << endl;
            buscarNombre(registros, nombre3);

            cout << "[3.4]  - ALGUNO DE LOS EQUIPOS PERTENECE A BENJAMIN? " << endl;
            buscarNombre(registros, nombre4);

            cout << "[3.5]  - ALGUNO DE LOS EQUIPOS PERTENECE A SAMUEL? " << endl;
            buscarNombre(registros, nombre5);

            cout << "[3.6]  - ALGUNO DE LOS EQUIPOS PERTENECE A RAYMOND? " << endl;
            buscarNombre(registros, nombre6);

            cout << "[4]    - CUAL ES LA DIRECCIÓN INTERNA DE LA COMPAÑIA? " << endl;
            cout << "Partiendo de nuetro algorclavemo de Buscar nombre, podemos saber que si existe dicho nombre dentro de nuestro Vector registros" << endl;
            cout << "una vez verificado el usuario existe dentro de nuestros registros, se utilizara dicho nombre para obtener el ID de la compañia" << endl;
            string nombre_origen = "cynthia.reto.com";
            buscarIdCompania(registros, nombre_origen);

            cout << "[5]    - ALGUNA COMPUTADORA SE LLAMA ""server.reto.com ""? " << endl;
            string nombre7 = "server.reto.com";
            buscarNombre(registros, nombre7);

            cout << "[6]    - QUE SERVICIO DE CORREO UTILIZAN (GMAIL, HOTMAIL, OUTLOOK, PROTONMAIL)? "<< endl;
            string nombre_destino0 = "gmail.com", nombre_destino1 = "hotmail.com", nombre_destino2 = "outlook.com", nombre_destino3 = "protonmail.com";
            buscarMail(registros, nombre_destino0);
            buscarMail(registros, nombre_destino1);
            buscarMail(registros, nombre_destino2);
            buscarMail(registros, nombre_destino3);

            cout << "[7]    - CONSIDERANDO LOS PUERTOS DESTINO, QUE PUERTOS ABAJO DEL 1000 SE ESTAN USANDO? " << endl;
            cout << "[8]    - CONSIDERANDO LOS PUERTOS MENORES A 1000, QUE APLICACIÓN / SERVICIO SE ESTA USANDO? " << endl;
            VerificarPuertosMil(registros);
        } 
        
        //  A C T I V I D A D   2 . 2
        else if (opcion == 2) {                                    
            ConexionesComputadora IP_Conocida = ConexionesComputadora("10.217.177.36", "jennifer.reto.com");
            Conexiones_IN_OUT(registros, IP_Conocida);
            
            cout << "\n[1]    - QUE DIRECCION IP ESTAS USANDO? " << endl;
            cout << "IP de un equipo existente es: 10.217.177.36" << endl << endl;

            cout << "[2]    - CUAL FUE LA DIRECCION IP DE LA ULTIMA CONEXION QUE RECIBIO ESA COMPUTADORA? " << endl;
            string last_Conection = IP_Conocida.lastConexiones_Entrantes();
            cout << "La última conexión recibida por esta computadora fue desde la IP: " << last_Conection << endl << endl;

            cout << "[3]    - LA DIRECCION ES INTERNA O EXTERNA?" << endl;
            string new_IP = Find_IP_Compania(registros);

            // Obtener direccion IP del equipo existente
            string IP_Existente = IP_Conocida.getIP();

            // Eliminar ultimos 8 bclaves de la dirección IP para obtener la dirección de la compañía
            size_t last_Point = IP_Existente.find_last_of('.');
            string IP_Company = IP_Existente.substr(0, last_Point);

            if (new_IP == IP_Company) {
                cout << "DIRECCION IP es de tipo -> INTERNA." << endl << endl;
            } 
            
            else {
                cout << "DIRECCION IP es de tipo -> EXTERNA." << endl << endl;
            }

            cout << "[4]    - CUANTAS CONEXIONES ENTRANTES TIENE ESA COMPUTADORA?" << endl;
            cout << "el equipo tiene -> " << IP_Conocida.sizeConexiones_Entrantes() << " Conexiones Entrantes"<< endl << endl; 

            cout << "[5]    - CUANTAS CONEXIONES SALIENTES TIENE ESA COMPUTADORA?" << endl;
            cout << "El equipo tiene -> " << IP_Conocida.sizeConexiones_Salientes()  << " Conexiones Salientes"<< endl << endl; 

            cout << "[6]    - TIENE ESTA COMPUTADORA 3 CONEXIONES SEGUIDAS A UN MISMO SclaveIO WEB?" << endl;

            if(Incidences(IP_Conocida)==true){
                cout<< "El equipo [SI] presenta tres incidencias seguidas de conexion a un mismo sclaveio web" << endl << endl;
            }
            else{
                cout<< "El equipo [NO] presenta tres incidencias seguidas de conexion a un mismo sclaveio web" << endl << endl;
            }

        } 
        
        //  A C T I V I D A D   3 . 2
        else if (opcion == 3) {
            cout << "\n[1]    - EXISTE ALGUN SITIO QUE SE MANTENGA EN EL TOP 5 TODOS LOS DIAS?" << endl;
            top(5, registros);
            if (Top_Days(registros)) {
                cout << "SI, Existe un sitio que se mantiene en el Top 5 todos los días." << endl << endl;
            } 

            else {
                cout << "NO, No existe un sitio que se mantiene en el Top 5 todos los días." << endl << endl;
            }

            cout << "[2]    - EXISTE ALGUN SITIO QUE ENTRE AL TOP 5 APARTIR DE UN DIA Y DE AHI APAREZCA EN TODOS LOS DIAS SUBSECUENTES?" << endl;
            string sitio = Top_Next_Days(registros);
            if (!sitio.empty()) {
                cout << "SI, Existe un sitio que entra al Top 5 a partir de un día y de ahí aparece en todos los días subsecuentes." << endl << endl;
            } 

            else {
                cout << "NO, No existe un sitio que entra al Top 5 a partir de un día y de ahí aparece en todos los días subsecuentes." << endl << endl;
            }

            cout << "[3]    - EXISTE ALGUN SITIO QUE APAREZCA EN EL TOP 5 CON UNA CANTIDAD MAS ALTA DE TRAFICO QUE LO NORMAL?" << endl;
            string Traffic_Site = Traffic(registros);
            if (!Traffic_Site.empty()) {
                cout << "SI, Existe un sitio que aparece en el Top 5 con una cantidad más alta de tráfico que lo normal." << endl;
            } 

            else {
                cout << "NO, No existe un sitio que aparece en el Top 5 con una cantidad más alta de tráfico que lo normal." << endl;
            }      
        } 
        
        else if (opcion == 4) {
            
            // Grafo que usamos para la pregunta 1 y 2
            Grafo grafo(registros);

            string A = "10.217.177.33";
            cout << "\nDatos Elegidos\n" << endl;
            cout << "A = 10.217.177.33" << endl;
            cout << "B = 6j9xlatbxjcjk9zuuewi.org" << endl;
            cout << "C = outlook.com\n" << endl;

            // Función conexiones salientes pregunta 1
            vector < pair < string, int > > Conexiones_A = grafo.Dia_Conexion_Saliente(registros, A);
            cout << "Conexiones [A] Salientes por día" << endl;

            int Conexiones_Totales = 0;
            for (const auto & info : Conexiones_A) {
                cout << info.first << ": " << info.second << " conexiones" << endl;
                Conexiones_Totales += info.second;
            }
            cout << " " << endl;
            cout << "Número total de conexiones salientes de A por día: " << Conexiones_Totales << "\n" << endl;

            // Método del grafo para saber si el vértice es el que más conexiones tiene
            bool Vortex_Conexiones_Entrantes = grafo.Vortex_Conexion_Entrante(A);
            cout << "¿Es A el vértice con más conexiones salientes hacia la red interna? ";
            if (Vortex_Conexiones_Entrantes) {
                cout << "Sí" << "\n" << endl;
            } else {
                cout << "No" << "\n" << endl;
            }

            // Método del grafo para responder pregunta 2
            // Conexiones entrantes hacia A, estructura parecida al método de salientes
            vector < pair < string, int > > Conexiones_Entrantes = grafo.Dia_Conexion_Entrante(registros, A);
            cout << "Conexiones [B] Entrantes por día" << endl;

            int Conexiones_Entrantes_Totales = 0;
            for (const auto & info : Conexiones_Entrantes) {
                cout << info.first << ": " << info.second << " conexiones" << endl;
                Conexiones_Entrantes_Totales += info.second;
            }

            cout << " " << endl;
            cout << "Número total de conexiones entrantes hacia A por día: " << Conexiones_Entrantes_Totales << endl;

            // Ciclo para responder a la pregunta planteada
            cout << " " << endl;
            cout << "¿Existen conexiones de las demás computadoras hacia A? ";
            if (Conexiones_Entrantes_Totales > 0) {
                cout << "Sí\n" << endl;
            } 
            
            else {
                cout << "No\n" << endl;
            }

            // Para las preguntas 3 y 4 se usó el grafo sitios
            SiteGrafo Object_SiteGrafo(registros);

            string B = "6j9xlatbxjcjk9zuuewi.org";
            cout << "Conexiones [B]  por día" << endl;
            vector < pair < string, int > > Conexiones_B = Object_SiteGrafo.Conexion_Dia(B);

            int Conexiones_Totales_B = 0;
            for (const auto & info : Conexiones_B) {
                cout << info.first << ": " << info.second << " conexiones" << endl;
                Conexiones_Totales_B += info.second;
            }
            cout << " " << endl;
            cout << "Número total de conexiones hacia B por día: " << Conexiones_Totales_B << endl;
            cout << " " << endl;

            // Pregunta 4
            string C = "outlook.com";
            cout << "Conexiones [C] por día" << endl;
            vector < pair < string, int > > Conexiones_C = Object_SiteGrafo.Conexion_Dia(C);

            int Conexiones_Totales_C = 0;
            for (const auto & info : Conexiones_C) {
                cout << info.first << ": " << info.second << " conexiones" << endl;
                Conexiones_Totales_C += info.second;
            }
            cout << " " << endl;
            cout << "Número total de conexiones hacia C por día: " << Conexiones_Totales_C << endl;
        } 
        
        else if (opcion == 5) {
            set<string> Nombres_No_Reto;
            map<string, string> Mapa_Inverso;

            Conjunto_Mapa(registros, Nombres_No_Reto, Mapa_Inverso);

            cout << "[1]    - HAY ALGUN NOMBRE DE DOMINIO EN EL CONJUNTO QUE SEA ANÓMALO (INSPECCION VISUAL)? " << endl;
            cout << "Tendria en cuenta el dominio ->  6j9xlatbxjcjk9zuuewi.org  como anomalo" << endl;

            string Nombre_Dominio = "6j9xlatbxjcjk9zuuewi.org";
            auto i = Mapa_Inverso.find(Nombre_Dominio);
            if (i != Mapa_Inverso.end()) {
                cout << "[2]  - La IP " << Nombre_Dominio << " es: " << i->second << endl;
            } 
            
            else {
                cout << "No se encontró la IP para el dominio " << Nombre_Dominio << endl;
            }

            map<string, ConexionesComputadora> Diccionario_Pares = Crear_Diccionario(registros);

            int Computadoras_Internas = Conexiones_Internas(Diccionario_Pares);
            cout << "[3]    - CANITIDAD DE COMPUTADORAS CON AL MENOS UNA CONEXION ENTRANTE EN LA IP INTERNA" << endl;
            cout << Computadoras_Internas << endl;

            vector<string> Computadoras = {"10.217.177.36", "10.217.177.121", "10.217.177.124", "10.217.177.146", "10.217.177.91"};
            vector<string> IPs_Unicas = Unique_IPs(Diccionario_Pares, Computadoras);

            cout << "[4]    - IPs únicas de las conexiones entrantes de las computadoras seleccionadas:" << endl;
            for (const auto& IP : IPs_Unicas) {
                cout << IP << endl;
            }

            cout << "[5]    - IPs que se han comunicado con las IPs encontradas en el paso anterior:" << endl;

            set<string> IP_Set;
            IPs_Sitio_Anomalo(IPs_Unicas, Diccionario_Pares, Nombre_Dominio, IP_Set);

            set<string> IPs_Paso4(Computadoras.begin(), Computadoras.end());

            unordered_map<int, string> Puerto_Protocolo = {
                {53, "DNS"}, {67, "UDP"}, {80, "HTTP"}, {135, "DCOM"},
                {443, "HTTPS"}, {465, "SMTP"}, {965, "TCP"}, {993, "IMAP"}
            };

            Fecha_Comunicacion(registros, IP_Set, IPs_Paso4, Puerto_Protocolo);
            } 
        
        else if (opcion == 0) {
            cout << "Adios" << endl;

        }

        else {
            cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
        }

    } while (opcion != 0);

    if (opcion == 0) {
        cout << "Adios" << endl;
    }
}


// F U N C I O N   P R I N C I P A L
int main(int argc, char const *argv[]) {
    menu();
    return 0;
}