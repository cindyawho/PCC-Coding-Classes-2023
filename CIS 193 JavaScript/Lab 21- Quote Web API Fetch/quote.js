window.addEventListener("DOMContentLoaded", function () {
   document.querySelector("#fetchQuotesBtn").addEventListener("click", function () {

      // Get values from drop-downs
      const topicDropdown = document.querySelector("#topicSelection");
      const selectedTopic = topicDropdown.options[topicDropdown.selectedIndex].value;
      const countDropdown = document.querySelector("#countSelection");
      const selectedCount = countDropdown.options[countDropdown.selectedIndex].value;
   
      // Get and display quotes
      fetchQuotes(selectedTopic, selectedCount);	   
   });
});

// TODO: Modify to use Fetch API
function fetchQuotes(topic, count) {
   
   let url = "https://wp.zybooks.com/quotes.php?topic=" + topic + "&count=" + count;
   fetch(url)
   .then(response => {
      //console.log("status is " + response.status);
      return response.text();
          //console.log("The Response Text is " + response.text());
          //let quotes = response.json();
          //console.log("The quotes that should store json response is " + quotes.quote[0]);
   })
   .then(textToEdit => {
      //console.log(textToEdit);
      let jsonObj = JSON.parse(textToEdit);
      //console.log(jsonObj);
      //console.log(jsonObj[0].quote);
      let html = "<ol>";
      for (let c = 0; c < count; c++) {
         //console.log("We are at the count of " + c + " with the QUOTE: " + jsonObj[c].quote + "And the SOURCE: " + jsonObj[c].source);
         html += `<li>${jsonObj[c].quote} - ${jsonObj[c].source}</li>`;
      }
      html += "</ol>";

      document.querySelector("#quotes").innerHTML = html;
   })
   .catch(error => {
      //console.log("Request failed", error);
      let html = "Topic '" + topic + "' not found";
      document.querySelector("#quotes").innerHTML = html;
   });

   
}
