window.addEventListener("DOMContentLoaded", function() {
  document.querySelector("#fetchQuotesBtn").addEventListener("click", function() {
    // Get values from drop-downs
    const topicDropdown = document.querySelector("#topicSelection");
    const selectedTopic = topicDropdown.options[topicDropdown.selectedIndex].value;
    const countDropdown = document.querySelector("#countSelection");
    const selectedCount = countDropdown.options[countDropdown.selectedIndex].value;

    // Get and display quotes
    fetchQuotes(selectedTopic, selectedCount);
  });
});

function fetchQuotes(topic, count) {
  // TODO: Modify to use XMLHttpRequest

  let endpoint = "https://wp.zybooks.com/quotes.php";
  let queryString = "topic=" + topic + "&count=" + count;
  let url = endpoint + "?" + queryString;

  let xhr = new XMLHttpRequest();
  xhr.addEventListener("load", responseReceivedHandler);
  xhr.responseType = "json";
  xhr.open("GET", url);
  xhr.send();

  //console.log("fetchQuotes() completed")
}

// TODO: Add responseReceivedHandler() here
// Called when Ajax response is received
function responseReceivedHandler() {
  //console.log(this);
  if (!this.response.error) {
    let countDropdown = document.querySelector("#countSelection");
    let count = parseInt(countDropdown.options[countDropdown.selectedIndex].value);

    // //stringify the response received from the server
    // let json = JSON.stringify(this.response);
    // //create two arrays, one to save the quotes, one to sve the sources
    // let quotesArr = [];
    // let sourceArr = [];
    // //parse the json string and add the values to the quotes and source arrays
    // JSON.parse(json, function(k, v) {
    //   if (k == "quote") {
    //     quotesArr.push(v); //add to quotes array
    //   }
    //   if (k == "source") {
    //     sourceArr.push(v); //add to source array
    //   }
    //   //return v;
    // });

    // Display quotes by creating a variable html that will store the order list
    let html = "<ol>";
    // Create for loop that will grab the quotes and source array values and add them to the html variable
    for (let c = 0; c < count; c++) {
      //html += `<li>` + quotesArr[c] + ` - ` + sourceArr[c] + `</li>`;
      html += `<li>` + this.response[c].quote + ` - ` + this.response[c].source + `</li>`;
    }
    // Close the order list
    html += "</ol>";

    // Display the html variable on the browser screen
    document.querySelector("#quotes").innerHTML = html;
  }
  else {
    // Display error message if Ajax request failed
    document.querySelector("#quotes").innerHTML = this.response.error; //"error": "Topic 'success' not found"
  }
}

