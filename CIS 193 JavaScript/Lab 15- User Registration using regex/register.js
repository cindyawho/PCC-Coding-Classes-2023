function checkForm() {
   // TODO: Perform input validation 

   // Variables to see if any errors exist in the form
   let errName, errEmail, errLength, errLow, errUpp, errDigit, errConf;

   // If form validation errors exist:
   
   // Display the formErrors <div> by removing the hide class
   let formErrorsDiv = document.getElementById("formErrors");
   formErrorsDiv.classList.remove("hide");
   
   //create Error List for Errors
   displayErrors();

   //Check Full Name Text Box
   let fullNameBox = document.getElementById("fullName");
   let fullNameText = fullNameBox.value;
   if (fullNameText.length < 1) {
      fullNameError();
      errName = true;
   } else{
      errName = false;
   }
   
   //Check Email Box
   let emailBox = document.getElementById("email");
   let emailText = emailBox.value;
   //user RegEx pattern
   let pattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,5}$/;
   //Take matching text from User Input
   let result = emailText.match(pattern);
   //If the User Input doesn't match the result, then error!
   if(result != emailText){
      emailError();
      errEmail = true;
   } else{
      errEmail = false;
   }

   //Check Password Length
   let passwordBox = document.getElementById("password");
   let passwordText = passwordBox.value;
   if (passwordText.length < 10 || passwordText.length > 20) {
      lengthError();
      errLength = true;
   } else{
      errLength = false;
   }

   //Check Password Lowercase and Uppercase
   let lowerPattern = /[a-z]/;
   let upperPattern = /[A-Z]/;
   result = passwordText.match(lowerPattern);
   //console.log(result);
   if(result === null){
      lowercaseError();
      errLow = true;
   } else{
      errLow = false;
   }
   //UPPERCASE check
   result = passwordText.match(upperPattern);
   //console.log(result);
   if(result === null){
      uppercaseError();
      errUpp = true;
   } else{
      errUpp = false;
   }

   //Check that Password contains a digit
   let digitPattern = /[0-9]/;
   result = passwordText.match(digitPattern);
   if(result === null){
      digitError();
      errDigit = true;
   } else{
      errDigit = false;
   }

   //Check that Confirmation Password matches
   let confirmPassBox = document.getElementById("passwordConfirm");
   let confirmPassText = confirmPassBox.value;
   if(confirmPassText != passwordText){
      confirmError();
      errConf = true;
   } else{
      errConf = false;
   }

   //If no form validation errors exist:
   if(!errName && !errEmail && !errLength && !errLow && !errUpp && !errDigit && !errConf){
      //Hide the formErrors <div> by adding the hide class
      formErrorsDiv.classList.add("hide");
      //Remove the error class from all test, email, and password <input> elements
      fullNameBox.classList.remove("error");
      emailBox.classList.remove("error");
      passwordBox.classList.remove("error");
      confirmPassBox.classList.remove("error");
   }



}

function displayErrors() {
   //get Element of form Errors div
   let formErrorsDiv = document.getElementById("formErrors");
   //Create an ordered list to append with error messages
   let errorList = document.createElement("UL");
   //give an ID to the OL so that we can add list items later
   errorList.setAttribute("id", "myUL");
   //add OL to document in the form errors Div
   formErrorsDiv.appendChild(errorList);
 }

 //Functions for each individual error
function fullNameError(){
   //Create list item for the Full Name error message
   let error1Item = document.createElement("LI");
   //Adds text to the list item
   let error1Text = document.createTextNode("Missing full name.");
   //connects the text to the list item
   error1Item.appendChild(error1Text);
   //add the list item to the ordered list OL
   document.getElementById("myUL").appendChild(error1Item);

   // Add the error class to each <input> element with invalid input
   let fullNameBox = document.getElementById("fullName");
   fullNameBox.classList.add("error"); 
}
//repeat for all errors
function emailError(){
   let error2Item = document.createElement("LI");
   let error2Text = document.createTextNode("Invalid or missing email address.");
   error2Item.appendChild(error2Text);
   document.getElementById("myUL").appendChild(error2Item);

   // Add the error class to each <input> element with invalid input
   let emailBox = document.getElementById("email");
   emailBox.classList.add("error"); 
}

function lengthError(){
   let error3Item = document.createElement("LI");
   let error3Text = document.createTextNode("Password must be between 10 and 20 characters.");
   error3Item.appendChild(error3Text);
   document.getElementById("myUL").appendChild(error3Item);

   // Add the error class to each <input> element with invalid input
   let passwordBox = document.getElementById("password");
   passwordBox.classList.add("error"); 
}

function lowercaseError(){
   let error4Item = document.createElement("LI");
   let error4Text = document.createTextNode("Password must contain at least one lowercase character.");
   error4Item.appendChild(error4Text);
   document.getElementById("myUL").appendChild(error4Item);
   
   // Add the error class to each <input> element with invalid input
   let passwordBox = document.getElementById("password");
   passwordBox.classList.add("error"); 
}

function uppercaseError(){
   let error5Item = document.createElement("LI");
   let error5Text = document.createTextNode("Password must contain at least one uppercase character.");
   error5Item.appendChild(error5Text);
   document.getElementById("myUL").appendChild(error5Item);

   // Add the error class to each <input> element with invalid input
   let passwordBox = document.getElementById("password");
   passwordBox.classList.add("error"); 
}

function digitError(){
   let error6Item = document.createElement("LI");
   let error6Text = document.createTextNode("Password must contain at least one digit.");
   error6Item.appendChild(error6Text);
   document.getElementById("myUL").appendChild(error6Item);

   // Add the error class to each <input> element with invalid input
   let passwordBox = document.getElementById("password");
   passwordBox.classList.add("error"); 
}

function confirmError(){
   let error7Item = document.createElement("LI");
   let error7Text = document.createTextNode("Password and confirmation password don't match.");
   error7Item.appendChild(error7Text);
   document.getElementById("myUL").appendChild(error7Item);

   // Add the error class to each <input> element with invalid input
   let passwordConfirmBox = document.getElementById("passwordConfirm");
   passwordConfirmBox.classList.add("error"); 
}

document.getElementById("submit").addEventListener("click", function(event) {
   checkForm();

   // Prevent default form action. DO NOT REMOVE THIS LINE
   event.preventDefault();
});