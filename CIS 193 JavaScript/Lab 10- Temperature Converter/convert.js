window.addEventListener("DOMContentLoaded", domLoaded);

function domLoaded() {
   // TODO: Complete the function
   //Register Convert button's click event handler
   let button = document.getElementById("convertButton");
   let cTextBox = document.getElementById("cInput");
   let fTextBox = document.getElementById("fInput");

   button.addEventListener("click", function(){
      const cText = cTextBox.value;

      if(!isNaN(parseFloat(cTextBox.value)) && cTextBox.value != ""){
         fTextBox.value = convertCtoF(parseFloat(cTextBox.value));
      } else if(!isNaN(fTextBox.value)){
         cTextBox.value = convertFtoC(parseFloat(fTextBox.value));
      } 
      
      
      let error = document.getElementById("errorMessage");
         if(isNaN(parseFloat(cTextBox.value)) && cTextBox.value != ""){
            error.innerHTML = String(cText) + " is not a number";
         } else if(isNaN(parseFloat(fTextBox.value))){
            error.innerHTML = String(fTextBox.value) + " is not a number";
         } else {
            error.innerHTML = "";
         }
      

      if(fTextBox.value < 32){
         document.getElementById("weatherImage").src = "cold.png";
      } else if(fTextBox.value <= 50){
         document.getElementById("weatherImage").src = "cool.png";
      } else {
         document.getElementById("weatherImage").src = "warm.png";
      }

   });

   //Ensure only one text field contains a value 
   cTextBox.addEventListener("input", function() {
      fTextBox.value = "";
   });

   fTextBox.addEventListener("input", function() {
      cTextBox.value = "";
   });
   

}

function convertCtoF(degreesCelsius) {
   // TODO: Complete the function
   let C = parseFloat(degreesCelsius);
   return (C*(9/5) + 32);
}

function convertFtoC(degreesFahrenheit) {
   // TODO: Complete the function
   let F = parseFloat(degreesFahrenheit);
   return ((F - 32)* (5/9));
}
