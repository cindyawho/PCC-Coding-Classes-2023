class SuperHuman {
	constructor(name, powerLevel) {
		this.name = name;
		this.powerLevel = powerLevel;
	}
}

//Create SuperHero classes that extend the SuperHuman class.
class SuperHero extends SuperHuman {
	//constructor that has name, alias, and powerLevel parameters
	constructor(name, alias, powerLevel) {
		//call the parent class' constructor with the given name and powerLevel
		super(name, powerLevel);
		//alias is the second parameter
		this.alias = alias;
	}

	//battle() method to the SuperHero class that has a SuperVillain parameter.
	battle(SuperVillain){
		//battle() should return true if the hero's powerLevel is >= the villain's powerLevel, false otherwise
		if(this.powerLevel >= SuperVillain.powerLevel){
			return true;
		} else {
			return false;
		}
	}
}

//Create SuperVillain classes that extend the SuperHuman class.
class SuperVillain extends SuperHuman {
	//constructor that has name, alias, and powerLevel parameters
	constructor(name, alias, powerLevel) {
		//call the parent class' constructor with the given name and powerLevel
		super(name, powerLevel);
		//alias is the second parameter
		this.alias = alias;
	}

	//getEvilChuckle() method to the SuperVillain class that returns the string "Ha ha ha!"
	getEvilChuckle() {
		return "Ha ha ha!";
	}
}

const heroes = {
	"Super Bacon": new SuperHero("Jack Oinker", "Super Bacon", 2),
	"Flat-Man": new SuperHero("Peter Pranker", "Flat-Man", 5),
	"Mighty Woman": new SuperHero("Diana Dense", "Mighty Woman", 8),
	"Captain Marvelous": new SuperHero("Carol Hangers", "Captain Marvelous", 9)
};

const villains = {
	"The Jokester": new SuperVillain("Jack Nastier", "The Jokester", 3),
	"Magnet Man": new SuperVillain("Max Eisenhardt", "Magnet Man", 6),
	"Lex Loner": new SuperVillain("Lex Loner", "Lex Loner", 2),
	"Thankos": new SuperVillain("Thankos", "Thankos", 9)
};

registerHandlers();

function registerHandlers() {
	// Detect selection of hero and villain
	document.querySelector("#heroSelect").addEventListener("change", selectionChanged);
	document.querySelector("#villainSelect").addEventListener("change", selectionChanged);

	selectionChanged();
}

function selectionChanged() {
	const selectedHeroValue = document.querySelector("#heroSelect").value;
	const selectedVillainValue = document.querySelector("#villainSelect").value;

	// Get hero and villain selected
	const selectedHero = heroes[selectedHeroValue];
	const selectedVillain = villains[selectedVillainValue];

	//console.log("before battle, selected Hero alias: ", selectedHero.alias);

	//call the selected hero's battle() method, passing in the selected villain
	let result = selectedHero.battle(selectedVillain);
	let winner;
	if(result){
		winner = selectedHero.alias;
		//console.log("after battle, Selected Hero Alias winner: ", selectedHero.alias);
	} else{
		winner = selectedVillain.alias;
		//console.log("after battle, Selected Villain Alias winner: ", selectedVillain.alias);
	}

	//Display the battle winner's alias in the winner paragraph
	let winnerText = document.getElementById("winner");
	winnerText.innerHTML = "Winner: " + winner + "!";
	//console.log(winner);
}
