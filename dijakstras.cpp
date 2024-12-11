#include <iostream>
using namespace std;

class dijakstras {
public:
    int vertices;
    int source;
    int dist[10];
    int path[10];
    int cost_matrix[10][10];
    int vis[10];

    dijakstras();
    void read();
    void print();
    void shortest_path();
    void updation();
    int minimum(int dist[10], int vis[10]);
};

dijakstras::dijakstras() {
    vertices = 0;
    source = 0;
    for (int i = 0; i < 10; i++) {
        dist[i] = 999;
        path[i] = -1;
        vis[i] = 0;
    }
}

void dijakstras::read() {
    cout << "Enter the number of vertices" << endl;
    cin >> vertices;
    cout << "Enter the source" << endl;
    cin >> source;
    cout << "Enter the cost matrix" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cin >> cost_matrix[i][j];
        }
    }
}

void dijakstras::print() {
    cout << "The number of vertices: " << vertices << endl;
    cout << "The source vertex is: " << source << endl;
    cout << "The cost matrix is:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << cost_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int dijakstras::minimum(int dist[10], int vis[10]) {
    int dist_min = 999;
    int min_index = -1;
    for (int i = 0; i < vertices; i++) {
        if (vis[i] == 0 && dist[i] < dist_min) {
            dist_min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void dijakstras::updation() {
    int a = minimum(dist, vis);
    vis[a] = 1;
    for (int i = 0; i < vertices; i++) {
        if (vis[i] == 0 && cost_matrix[a][i] && dist[a] != 999 && dist[a] + cost_matrix[a][i] < dist[i]) {
            dist[i] = dist[a] + cost_matrix[a][i];
            path[i] = a;
        }
    }
}

void dijakstras::shortest_path() {
    for (int i = 0; i < vertices; i++) {
        dist[i] = cost_matrix[source][i];  
        path[i] = source;   
    }
    dist[source] = 0;
    vis[source] = 1;

    for (int i = 0; i < vertices - 1; i++) {
        updation();
    }

    for (int j = 0; j < vertices; j++) {
        cout << "Vertex: " << j << ", Distance: " << dist[j] << ", Path: " << path[j] << endl;
    }
}

int main() {
    dijakstras d;
    d.read();
    d.print();
    d.shortest_path();
    return 0;
}

