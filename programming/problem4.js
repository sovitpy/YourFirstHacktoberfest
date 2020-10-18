// Write a JavaScript code to validate whether the input in a HTML form contains a valid email or not before sending a GET request to https://example.com/email?em={email_here}!
let url = "https://example.com/email?em=";
function ValidateEmail(mail) {
	if (
		/^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9-]+(?:\.[a-zA-Z0-9-]+)*$/.test(
			myForm.emailAddr.value
		)
	) {
		url = url + mail;
		httpGet(url);
	}
	alert("You have entered an invalid email address!");
	return false;
}

function httpGet(theUrl) {
	var xmlHttp = new XMLHttpRequest();
	xmlHttp.open("GET", theUrl, false); // false for synchronous request
	xmlHttp.send(null);
	return xmlHttp.responseText;
}
