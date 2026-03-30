#include <iostream>

using namespace std;

int main() {
    int choice;
    int running = 1;

    cout << "------------------------------------------" << endl;
    cout << " MULTIPURPOSE ELECTRONIC CALCULATOR      " << endl;
    cout << "------------------------------------------" << endl;

    while (running == 1) {
        cout << "\nMAIN MENU:" << endl;
        cout << "1. Ohm's Law (V, I, R)" << endl;
        cout << "2. Resistors in Series" << endl;
        cout << "3. Resistors in Parallel" << endl;
        cout << "4. Power Calculator (Watts)" << endl;
        cout << "5. Exit Program" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            
            case 1: { // --- OHM'S LAW ---
                int type;
                double v, i, r;
                cout << "\nFind:  1.Voltage.  2.Current  3.Resistance: ";
                cin >> type;
                
                switch (type) {
                    case 1:
                        cout << "Enter I : "; cin >> i ;
                        cout << "Enter R : "; cin >> r ;
                        cout << "Voltage = " << i * r << "V" << endl;
                        break;
                    case 2:
                        cout << "Enter V and R: "; 
                        cin >> v >> r;
                        cout << "Current = " << v / r << "A" << endl;
                        break;
                    case 3:
                        cout << "Enter V and I: "; 
                        cin >> v >> i;
                        cout << "Resistance = " << v / i << " Ohms" << endl;
                        break;
                    default:
                        cout << "\nInvalid selection!! Try again." << endl;
                }
                break; 
            }

            case 2: { // --- SERIES RESISTORS ---
                int n;
                double r_val;
                double total_r;
                cout << "How many resistors in series? ";
                cin >> n;
                for (int i = 1; i <= n; i++) {
                    cout << "Enter the value for R" << i << ": ";
                    cin >> r_val;
                    total_r = total_r + r_val;
                }
                cout << "Total Series Resistance = " << total_r << " Ohms" << endl;
                break;
            }

            case 3: { // --- PARALLEL RESISTORS ---
                int n;
                double r_val;
                double total_p;
                cout << "How many resistors in parallel? ";
                cin >> n;
                for (int i = 1; i <= n; i++) {
                    cout << "Enter the value for R" << i << ": ";
                    cin >> r_val;
                    total_p = total_p + (1/ r_val);
                }
                cout << "Total Parallel Resistance = " << (1/ total_p) << " Ohms" << endl;
                break;
            }

            case 4: { // --- POWER CALCULATOR ---
                double v, i, p;
                cout << "Enter Voltage (V): "; cin >> v;
                cout << "Enter Current (I): "; cin >> i;
                p = v * i;
                cout << "Power (P) = " << p << " Watts" << endl;
                break;
            }

            case 5: // --- EXIT ---
                running = 0;
                cout << "Thank you for using the calculator!" << endl;
                break;

            default: // --- INVALID INPUT ---
                cout << "Invalid choice, try again." << endl;
        }
    }
   

    return 0;
}
