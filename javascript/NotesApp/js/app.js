let addButton = document.getElementById("addButton");
showNotes();

//when add button clicked...
addButton.addEventListener("click", function (e) {
    //grasp the text area
    let addText = document.getElementById("addText");
    //getting all notes from local storage
    let notes = localStorage.getItem("notes");
    if (notes != null) {
        //passing notes(String) as an array in notesObj
        notesObj = JSON.parse(notes);

    }
    else {
        //creating notesObj object(Array)
        notesObj = [];
    }
    //appending value in array
    notesObj.push(addText.value);
    //saving in local storage in form of string
    localStorage.setItem("notes", JSON.stringify(notesObj));
    //making text area null 
    addText.value = " ";
    //calling showNotes() function to display notes from local storage
    showNotes();
})

//function to display notes
function showNotes() {
    let notes = localStorage.getItem("notes");
    if (notes != null) {
        notesObj = JSON.parse(notes);

    }
    else {
        notesObj = [];
    }
    let html = "";

    notesObj.forEach(function (element, index) {

        //creating a card through js
        html += `
        <div class="noteCard my-2 mx-2 card" style="width: 18rem;">
          <div class="card-body">
            <h5 class="card-title">Note ${index + 1}</h5>
            <p id="showText" class="showText"> ${element} </p>
            <button id = "${index}" onClick = "deleteNote(this.id)" class="btn btn-primary">Delete Note</button>
          </div>
        </div> `;
        console.log("typeof html variable", typeof html)
        console.log(html)
    });
    let notesElement = document.getElementById("notes");
    if (notesObj.length == 0) {
        notesElement.innerHTML = `"Add a note" `;
    }
    else {
        notesElement.innerHTML = html;
    }

}

//function to delete a note
function deleteNote(index) {
    console.log(index)
    let notes = localStorage.getItem("notes");
    if (notes != null) {
        notesObj = JSON.parse(notes);

    }
    else {
        notesObj = [];
    }
    //deleting selected note
    notesObj.splice(index, 1);
    //updating local storage
    localStorage.setItem("notes", JSON.stringify(notesObj));
    showNotes();

}
//implementing search functionality
let search = document.getElementById("searchText");
search.addEventListener("input", function () {
    let inputVal = search.value;

    let noteCards = document.getElementsByClassName("noteCard");
    Array.from(noteCards).forEach(function (element) {
        let cardText = element.getElementsByTagName("p")[0].innerText;
        console.log(element);
        if (cardText.includes(inputVal)) {
            element.style.display = "block";
        }
        else {

            element.style.display = "none";
        }

    })

})
