#include <iostream>
#include <string>
#include <vector>


int main(){
    std::string mot;
    int k=0;
    std::cin>> mot >> k;
    std::vector<std::string> intouchables(k);
    for (std::string& s : intouchables){
        std::cin>> s;
    }

    int n = 0;
    std::cin >> n;

    int purs=0;
    int aRevoir=0;
    int filets=0;
    std::vector<std::string> prets;

    for (int i=0;i<n;i++){
        std::string nom;
        int b=0;
        std::cin >>nom>>b;

        bool glue=false;
        bool decouper=false;
        for(int j=0;j<b;j++){
            std::string besoin;
            std::cin>> besoin;
            if (besoin == "FENETRE" || besoin == "SOURIS" || besoin == "CLAVIER" || besoin == "GPU"){
                glue=true;
            }else if (besoin == "DISQUE" || besoin == "HORLOGE" || besoin == "RESEAU"){
                decouper = true;
            }
        }

        int t=0;
        std::cin>>t;
        bool touche=false;
        std::string premiere;
        for (int j =0;j<t;j++){
            std::string partie;
            std::cin>> partie;
            if (!touche){
                for (const std::string& x:intouchables){
                    if (x==partie){
                        touche=true;
                        premiere=partie;
                        break;
                    }
                }
            }
        }

        int e=0;
        std::cin >> e;

        std::string lieu;
        if (glue){
            lieu = "GLUE";
        }else if (decouper){
            lieu = "DECOUPER";
        }else{
            lieu = "FICHIER_PUR";
            purs++;
        }

        std::string toucheTxt = "INTACT";
        if (touche){
            toucheTxt = "REVOIR " + premiere;
            aRevoir++;
        }

        std::string filet = "FILET_EXISTANT";
        if (e==0){
            filet = "FILET_D_ABORD";
                filets++;
            }

            if (!touche && e != 0){
                prets.push_back(nom);
            }

            std::cout << nom << " " << lieu << " " << toucheTxt << " " << filet << "\n";
        }

        std::cout << "PURS " << purs << "\n";
        std::cout << "A_REVOIR " << aRevoir << "\n";
        std::cout << "FILETS_A_POSER " << filets << "\n";
        std::cout << "PRETS";
        if (prets.empty()) {
            std::cout << " AUCUN";
        }else{
            for (const std::string& p : prets){
                std::cout << " " << p;            }
        }
        std::cout << "\n";
    return 0;
    }
    
