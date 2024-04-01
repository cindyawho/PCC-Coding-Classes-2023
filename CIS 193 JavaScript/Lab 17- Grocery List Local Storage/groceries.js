let groceryList = [];

// Wait until DOM is loaded
window.addEventListener("DOMContentLoaded", function() {
   //adds click handlers for the Add and Clear buttons
   document.querySelector("#addBtn").addEventListener("click", addBtnClick);
   document.querySelector("#clearBtn").addEventListener("click", clearBtnClick);

   // Load the grocery list from localStorage
   groceryList = loadList();
   
   if (groceryList.length > 0) {
      // Display list
      for (let item of groceryList) {
         showItem(item);
      } 
   }
   else {
      // No list to display
      enableClearButton(false);
   }     
});

// Enable or disable the Clear button
function enableClearButton(enabled) {
   document.querySelector("#clearBtn").disabled = !enabled;
}

// Show item at end of the ordered list
function showItem(item) {
   let list = document.querySelector("ol");
   list.innerHTML += `<li>${item}</li>`;     
}

// Add item to grocery list
function addBtnClick() {
   let itemTextInput = document.querySelector("#item");
   let item = itemTextInput.value.trim();
   if (item.length > 0) {
      enableClearButton(true);
      showItem(item);
      groceryList.push(item);

      // Save groceryList to localStorage
      saveList(groceryList);
   }

   // Clear input
   itemTextInput.value = '';
}

// Clear the list
function clearBtnClick() {
   enableClearButton(false);
   groceryList = [];
   let list = document.querySelector("ol");
   list.innerHTML = "";

   // Remove the grocery list from localStorage
   clearList();
}

// Complete the functions below

/*loadList() should load a grocery list from localStorage 
and return an array containing each item. 
Assume the list is stored as a single comma-delimited string.
Ex: The list stored as "orange juice,milk,cereal" is returned 
as the array ["orange juice", "milk", "cereal"]. 
*/
function loadList() {
   //console.log("Hi! You are in the loadList() function.");
   if(localStorage.getItem("list")){
      //console.log("The grocery list exists! Let's make it an array.")
      let str = localStorage.getItem("list");
      groceryList = str.split(",");
      //console.log(groceryList);
      return groceryList;
   }
   else {
      //An empty array should be returned if 
      //localStorage does not contain a grocery list.
      return [];
   }  
}

/*saveList() should save the given groceryList array 
to localStorage as a single comma-delimited string. 
Ex: The array ["orange juice", "milk", "cereal"] should 
be saved as the string "orange juice,milk,cereal".
 */
function saveList(groceryList) {
   let itemsString = groceryList.toString();
   localStorage.setItem("list", itemsString);
}

function clearList() {
   localStorage.clear();
}