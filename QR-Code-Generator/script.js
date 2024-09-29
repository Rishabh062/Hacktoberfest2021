let qrcode = document.querySelector("img");
let qrtext = document.querySelector("textarea");
var qrbtn = document.getElementById("Generate");
var downbtn = document.getElementById("Download");


qrbtn.onclick = function(){
    let size ="1000x1000";
    let data = qrtext.value;
    let baseURL = "http://api.qrserver.com/v1/create-qr-code/";
    let url = `${baseURL}?data=${data}&size=${size}`;
    qrcode.src = url;
};
downbtn.onclick = async function(){
console.log("Testing");
let size ="1000x1000";
let data = qrtext.value;
let baseURL = "http://api.qrserver.com/v1/create-qr-code/";
let url = `${baseURL}?data=${data}&size=${size}`;
const image = await fetch(url)
  const imageBlog = await image.blob()
  const imageURL = URL.createObjectURL(imageBlog)

  const link = document.createElement('a')
  link.href = imageURL
  link.download = 'QR_download'
  document.body.appendChild(link)
  link.click()
  document.body.removeChild(link)
  console.log("test done");
};

