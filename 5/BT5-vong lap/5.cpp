#include <iostream>
using namespace std;

int main(){
    // so nguoi choi toi thieu va toi da
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    int players,        // So nguoi choi co san
        teamPlayers,    // So nguoi choi yeu cau trong 1 doi
        numTeams,       // So doi
        leftOver;       // So nguoi choi con lai

    // Nhap so nguoi choi mong muon cho moi doi.
    cout << "Ban muon bao nhieu nguoi choi cho moi doi? ";
    cin >> teamPlayers;

    // Kiem tra dau vao.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS) {
        cout << "Ban nen co it nhat " << MIN_PLAYERS
             << " nhung khong nhieu hon " << MAX_PLAYERS << " nguoi choi cho moi doi.\n";

        // Nhap lai dau vao.
        cout << "Ban muon bao nhieu nguoi choi cho moi doi? ";
        cin >> teamPlayers;
    }

    // Nhap so nguoi choi co san.
    cout << "Co bao nhieu nguoi choi co san? ";
    cin >> players;

    // Kiem tra dau vao.
    while (players <= 0) {
        cout << "Vui long nhap so lon hon hoac bang 0: ";
        cin >> players;
    }
    // Tinh toan so doi.
    numTeams = players / teamPlayers;
     
    // Tinh toan so nguoi choi con lai.
    leftOver = players % teamPlayers;

    // Hien thi ket qua.
    cout << "Se co " << numTeams << " doi voi "
         << leftOver << " nguoi choi thua.";
         
    return 0;
}
