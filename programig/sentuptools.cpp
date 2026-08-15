#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>
#include <curl/curl.h> // ត library

using namespace std;


// Callback For curl to accept data from API
size_t WriteCallback(void* contents, size_t si curl:https://api.example.com/api
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* userp) {
    userp->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void clearScreen() {
    //  ANSI  To clean the screen Cursor  Back at them.
    cout << "\033[2J\033[H";
}

void progressBar(double value) {
    //  Use \r to make it run on the same line.
    cout << "\r\033[1;32m > PROGRESS: [\033[0m";

    const int width = 30;
    int filled = static_cast<int>(value / 100.0 * width);

    for (int i = 0; i < width; ++i) {
        if (i < filled)
            cout << "\033[1;36m█\033[0m"; //  Light blue
        else
            cout << "\033[1;30m░\033[0m"; //  Gray
    }
    cout << "\033[1;32m] " << fixed << setprecision(1) << value << "%\033[0m" << flush;
}

void scanAPI(const string& url) {
    clearScreen();
    cout << "\033[1;36m[ API SCANNER ENGINE ]\033[0m\n\n";
    cout << "\033[1;33m[TARGET URL:"https://api.example.com/nmap: "]\033[0m\n";

    CURL* curl = curl_easy_init();
    if (!curl) {
        cout << "\n\033[1;31m[ERROR] Failed to initialize CURL\033[0m\n";
        return;
    }

    string readBuffer;
    double val = 0.0;

    curl_easy_setopt(curl,https://api.example.com/endpoint:CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl,https://api.example.com/endpoint:CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl,https://api.example.com/endpoint:CURLOPT_WRITEDATA, &readBuffer);
    curl_easy_setopt(curl,https://api.example.com/endpoint:CURLOPT_TIMEOUT, 10L);

    // Fake progress before displaying results
    while (val < 100.0) {
        progressBar(val);
        val += (rand() % 15) + 5;
        if (val > 100.0) val = 100.0;
        this_thread::sleep_for(chrono::milliseconds(80));
    }

    cout << "\n\n\033[1;32m[FETCHING DATA...]\033[0m\n";
    CURLcode res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
        cout << "\033[1;31m[ERROR] " << curl_easy_strerror(res) << "\033[0m\n";
    } else {
        long http_code = 0;
        curl_easy_getinfo(curl,https://api.example.com/CURLINFO_RESPONSE_CODE, &http_code);
        cout << "\033[1;32m[SCAN COMPLETED!]\033[0m\n";
        cout << "HTTP STATUS: " << http_code << "\n";
        cout << "SIZE: " << readBuffer.length() << " bytes\n";
        cout << "\n\033[1;34m[CONTENT PREVIEW]:\033[0m\n";
        cout << readBuffer.substr(0, 300) << "...\n";
    }
    curl_easy_cleanup(curl);
}

int main() {                                                                                                                                               srand(static_cast<unsigned>(time(nullptr)));

    while (true) {
        clearScreen();
        cout << "\033[1;36m╔════════════════════════════════╗\033[0m\n";
        cout << "\033[1;36m║      CYBER SCANNER v1.2        ║\033[0m\n";
        cout << "\033[1;36m╚════════════════════════════════╝\033[0m\n\n";
        cout << " [1] Local Scan\n";                                                                                                                           cout << " [2] API Scan (libcurl)\n";
        cout << " [3] Exit\n\n";
        cout << "Select: ";

        int choice;
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1) {
            double val = 0.0;                                                                                                                                      while (val <= 100.0) {
                clearScreen();  // Add clearScreen in the loop so it doesn't output multiple lines
                cout << "\033[1;36m[ LOCAL SYSTEM SCANNER ]\033[0m\n\n";                                                                                               cout << "\033[1;33m[STATUS: ACTIVE]\033[0m\n";
                cout << "\033[1;32m[TARGET: SYSTEM_CORE]\033[0m\n\n";

                progressBar(val);
                if (val >= 100.0) break;

                val += (rand() % 50) / 10.0;
                this_thread::sleep_for(chrono::milliseconds(60));
            }
            cout << "\n\n\033[1;32m[SUCCESS!]\033[0m\n";
        }
        else if (choice == 2) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string url;
            cout << "Enter URL: ";
            getline(cin, url);
            if (!url.empty()) scanAPI(url);
        }
        else if (choice == 3) break;

        cout << "\nPress Enter to return...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
    return 0;
}

