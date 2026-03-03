#include <iostream>
#include <string>
using namespace std;

class Pokemon{
public:
    int id;
    string species;
    string moveOne;
    string moveTwo;

    // -- The Constructor --
    // It initalizes all members when a new Pokemon is created
    // Constructor is always the same name as the class
    Pokemon(int id, string species, string moveOne, string moveTwo)
        : id(id), species(species), moveOne(moveOne), moveTwo(moveTwo){
        }
        
    // Print pokemon information method
    void printInfo(){
        cout << id << ": " << species << "\n";
        cout << "  Moves: " << moveOne << ", " << moveTwo << "\n\n";
    }
};

class Pokedex{
    // -- Method to add a pokemon --
    private:
        vector<Pokemon> pokemon;


    public:
        // -- Method to add a pokemon --
        void addPokemon(Pokemon& newPokemon){
            // 'pokemon' is the vector(dynamic array/list)
            // 'newPokemon is the parameter that was passed in
            pokemon.push_back(newPokemon);
        }

        // -- Method to print the pokedex to the console --
        void printAllPokemon(){
            // 'pokemon' here refers to the member vector
            for (Pokemon& p : pokemon){
                // Call the printInfo() method on each Pokemon 'p'
                p.printInfo();
            }
        }

        bool findPokemonById(int pokemonId){
            // loop through each pokemon in the dex
            for (Pokemon& p : pokemon){
                if (p.id == pokemonId){
                    p.printInfo();
                    return true;
                }
            }
            return false;
        }

}; // classes need a semi-colon after them

Pokedex initializePokedex(){
    // --- SETUP --- //
    // 1. Initialize all Pokemon in one list (a vector)
    // use the {} constructor syntax right inside.
    vector<Pokemon> allPokemon = {
        {1, "Bulbasaur", "Leech Seed", "Vine Whip"},
        {2, "Ivysaur", "Vine Whip", "Seed Bomb"},
        {3, "Venusaur", "Petal Blizzard", "Solar Beam"},
        {4, "Charmander", "Ember", "Metal Claw"},
        {5, "Charmeleon", "Fire Fang", "Flamethrower"},
        {6, "Charizard", "Fire Spin", "Fly"},
        {7, "Squirtle", "Water Gun", "Water Pulse"},
        {8, "Warturtle", "Surf", "Ice Beam"},
        {9, "Blastoise", "Muddy Water", "Hydro Pump"},
        {10, "Caterpie", "Tackle", "String Shot"},
        {11, "Metapod", "Harden", "Harden"},
        {12, "Butterfree", "Confusion", "Sleep Powder"},
        {13, "Weedle", "Poison Sting", "String Shot"},
        {14, "Kakuna", "Harden", "Harden"},
        {15, "Beedrill", "Twineedle", "Poison Jab"},
        {16, "Pidgey", "Gust", "Quick Attack"},
        {17, "Pidgeotto", "Wing Attack", "Whirlwind"},
        {18, "Pidgeot", "Hurricane", "Brave Bird"},
        {19, "Rattata", "Quick Attack", "Hyper Fang"},
        {20, "Raticate", "Hyper Fang", "Super Fang"},
        {21, "Spearow", "Peck", "Fury Attack"},
        {22, "Fearow", "Drill Peck", "Sky Attack"},
        {23, "Ekans", "Poison Sting", "Bite"},
        {24, "Arbok", "Acid", "Gunk Shot"},
        {25, "Pikachu", "Thunder Shock", "Quick Attack"},
        {26, "Raichu", "Thunderbolt", "Volt Tackle"},
        {27, "Sandshrew", "Scratch", "Sand Attack"},
        {28, "Sandslash", "Slash", "Earthquake"},
        {29, "Nidoran (F)", "Scratch", "Poison Sting"},
        {30, "Nidorina", "Poison Fang", "Crunch"},
        {31, "Nidoqueen", "Earthquake", "Superpower"},
        {32, "Nidoran (M)", "Peck", "Poison Sting"},
        {33, "Nidorino", "Poison Jab", "Horn Attack"},
        {34, "Nidoking", "Earthquake", "Megahorn"},
        {35, "Clefairy", "Pound", "Metronome"},
        {36, "Clefable", "Moonblast", "Meteor Mash"},
        {37, "Vulpix", "Ember", "Will-O-Wisp"},
        {38, "Ninetales", "Flamethrower", "Fire Blast"},
        {39, "Jigglypuff", "Sing", "Pound"},
        {40, "Wigglytuff", "Body Slam", "Hyper Voice"},
        {41, "Zubat", "Leech Life", "Wing Attack"},
        {42, "Golbat", "Air Cutter", "Poison Fang"},
        {43, "Oddish", "Absorb", "Acid"},
        {44, "Gloom", "Petal Dance", "Sleep Powder"},
        {45, "Vileplume", "Petal Blizzard", "Sludge Bomb"},
        {46, "Paras", "Scratch", "Spore"},
        {47, "Parasect", "Spore", "X-Scissor"},
        {48, "Venonat", "Confusion", "Poison Powder"},
        {49, "Venomoth", "Psychic", "Bug Buzz"},
        {50, "Diglett", "Scratch", "Dig"},
        {51, "Dugtrio", "Earthquake", "Sucker Punch"},
        {52, "Meowth", "Scratch", "Pay Day"},
        {53, "Persian", "Slash", "Power Gem"},
        {54, "Psyduck", "Water Gun", "Confusion"},
        {55, "Golduck", "Hydro Pump", "Psychic"},
        {56, "Mankey", "Karate Chop", "Cross Chop"},
        {57, "Primeape", "Close Combat", "Thrash"},
        {58, "Growlithe", "Ember", "Bite"},
        {59, "Arcanine", "Flamethrower", "Extreme Speed"},
        {60, "Poliwag", "Bubble", "Hypnosis"},
        {61, "Poliwhirl", "Water Gun", "Body Slam"},
        {62, "Poliwrath", "Hydro Pump", "Dynamic Punch"},
        {63, "Abra", "Teleport", "Teleport"},
        {64, "Kadabra", "Psybeam", "Recover"},
        {65, "Alakazam", "Psychic", "Future Sight"},
        {66, "Machop", "Karate Chop", "Low Kick"},
        {67, "Machoke", "Submission", "Seismic Toss"},
        {68, "Machamp", "Dynamic Punch", "Cross Chop"},
        {69, "Bellsprout", "Vine Whip", "Wrap"},
        {70, "Weepinbell", "Razor Leaf", "Poison Jab"},
        {71, "Victreebel", "Leaf Blade", "Sludge Bomb"},
        {72, "Tentacool", "Poison Sting", "Water Gun"},
        {73, "Tentacruel", "Surf", "Sludge Wave"},
        {74, "Geodude", "Rock Throw", "Tackle"},
        {75, "Graveler", "Rock Slide", "Earthquake"},
        {76, "Golem", "Stone Edge", "Earthquake"},
        {77, "Ponyta", "Ember", "Fire Spin"},
        {78, "Rapidash", "Flare Blitz", "Megahorn"},
        {79, "Slowpoke", "Water Gun", "Confusion"},
        {80, "Slowbro", "Psychic", "Surf"},
        {81, "Magnemite", "Thunder Shock", "Thunder Wave"},
        {82, "Magneton", "Thunderbolt", "Tri Attack"},
        {83, "Farfetch'd", "Peck", "Slash"},
        {84, "Doduo", "Peck", "Drill Peck"},
        {85, "Dodrio", "Tri Attack", "Drill Peck"},
        {86, "Seel", "Headbutt", "Ice Beam"},
        {87, "Dewgong", "Aurora Beam", "Surf"},
        {88, "Grimer", "Pound", "Sludge"},
        {89, "Muk", "Sludge Bomb", "Gunk Shot"},
        {90, "Shellder", "Tackle", "Ice Shard"},
        {91, "Cloyster", "Icicle Spear", "Surf"},
        {92, "Gastly", "Lick", "Night Shade"},
        {93, "Haunter", "Shadow Ball", "Sludge Bomb"},
        {94, "Gengar", "Shadow Ball", "Dream Eater"},
        {95, "Onix", "Rock Throw", "Rock Tomb"},
        {96, "Drowzee", "Hypnosis", "Confusion"},
        {97, "Hypno", "Psychic", "Shadow Ball"},
        {98, "Krabby", "Bubble", "Crabhammer"},
        {99, "Kingler", "Crabhammer", "Guillotine"},
        {100, "Voltorb", "Spark", "Self-Destruct"},
        {101, "Electrode", "Thunderbolt", "Explosion"},
        {102, "Exeggcute", "Confusion", "Sleep Powder"},
        {103, "Exeggutor", "Psychic", "Solar Beam"},
        {104, "Cubone", "Bone Club", "Bonemerang"},
        {105, "Marowak", "Bonemerang", "Earthquake"},
        {106, "Hitmonlee", "High Jump Kick", "Mega Kick"},
        {107, "Hitmonchan", "Fire Punch", "Ice Punch"},
        {108, "Lickitung", "Lick", "Wrap"},
        {109, "Koffing", "Smog", "Sludge"},
        {110, "Weezing", "Sludge Bomb", "Explosion"},
        {111, "Rhyhorn", "Horn Attack", "Stomp"},
        {112, "Rhydon", "Earthquake", "Megahorn"},
        {113, "Chansey", "Pound", "Soft-Boiled"},
        {114, "Tangela", "Absorb", "Vine Whip"},
        {115, "Kangaskhan", "Mega Punch", "Dizzy Punch"},
        {116, "Horsea", "Bubble", "Water Gun"},
        {117, "Seadra", "Hydro Pump", "Dragon Pulse"},
        {118, "Goldeen", "Peck", "Horn Attack"},
        {119, "Seaking", "Waterfall", "Megahorn"},
        {120, "Staryu", "Water Gun", "Swift"},
        {121, "Starmie", "Psychic", "Hydro Pump"},
        {122, "Mr. Mime", "Confusion", "Light Screen"},
        {123, "Scyther", "Quick Attack", "Wing Attack"},
        {124, "Jynx", "Ice Punch", "Psychic"},
        {125, "Electabuzz", "Thunder Punch", "Thunderbolt"},
        {126, "Magmar", "Fire Punch", "Flamethrower"},
        {127, "Pinsir", "Vice Grip", "X-Scissor"},
        {128, "Tauros", "Tackle", "Hyper Beam"},
        {129, "Magikarp", "Splash", "Tackle"},
        {130, "Gyarados", "Hydro Pump", "Hyper Beam"},
        {131, "Lapras", "Ice Beam", "Surf"},
        {132, "Ditto", "Transform", "Transform"},
        {133, "Eevee", "Quick Attack", "Tackle"},
        {134, "Vaporeon", "Water Gun", "Hydro Pump"},
        {135, "Jolteon", "Thunder Shock", "Thunderbolt"},
        {136, "Flareon", "Ember", "Flamethrower"},
        {137, "Porygon", "Tackle", "Tri Attack"},
        {138, "Omanyte", "Water Gun", "Rock Throw"},
        {139, "Omastar", "Hydro Pump", "Rock Slide"},
        {140, "Kabuto", "Scratch", "Rock Throw"},
        {141, "Kabutops", "Slash", "Rock Slide"},
        {142, "Aerodactyl", "Wing Attack", "Hyper Beam"},
        {143, "Snorlax", "Body Slam", "Rest"},
        {144, "Articuno", "Ice Beam", "Blizzard"},
        {145, "Zapdos", "Thunder", "Drill Peck"},
        {146, "Moltres", "Fire Blast", "Sky Attack"},
        {147, "Dratini", "Wrap", "Dragon Rage"},
        {148, "Dragonair", "Dragon Pulse", "Hyper Beam"},
        {149, "Dragonite", "Hyper Beam", "Fly"},
        {150, "Mewtwo", "Psychic", "Shadow Ball"},
        {151, "Mew", "Psychic", "Metronome"}
    };

    // 2. Initialize the pokedex ()
    Pokedex pokedex;

    // 3. Add all pokemon in side the Pokemon vector to the pokedex:
    for (Pokemon& p : allPokemon){
        pokedex.addPokemon(p);
    }
    return pokedex;
}

int main(){
    Pokedex pokedex = initializePokedex();
    int pokemonId;
    // prompt user for which pokemon to access
    cout << "Loading the Kanto Pokedex... \n\n";
    cout << "Which pokemon would you like to access? (1-151):\n";

    // get user input
    cin >> pokemonId;

    // display pokemon by pokedex input
    cout << "\nYour requested Pokemon information:\n\n";
    pokedex.findPokemonById(pokemonId);

}