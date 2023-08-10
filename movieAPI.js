import React,{useEffect, useState} from "react";
import axios from 'axios';
import UserData from "../UserProfile/UserData.jsx";
import "./About.css";

const About = () => {
  const [myData, setMyData]= useState([]);
  let isLoading = true;
  let API = "https://api.themoviedb.org/3/discover/movie?sort_by=popularity.desc&api_key=1cf50e6248dc270629e802686245c2c8";
  const fetchApiData = async(url)=>{
    try {
        const res = await axios.get(url);
        setMyData(res.data.results);
        isLoading = false;
    } catch (error) {
        console.log(error);
    }
  }
  useEffect(()=>{
    fetchApiData(API);
    // axios.get("https://www.alphavantage.co/query?function=TIME_SERIES_DAILY&symbol=tcs.BSE&outputsize=full&apikey=5PGEEDZ2OLALAVNS")
    // .then((res)=>
    // setMyData(res.data)
    // ).catch((error)=>
    // console.log(error)
    // );
  },[]);
  return(
    <>
        <h1>Open Your Console</h1>
        <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Animi quod ut libero, aperiam recusandae velit nihil commodi laboriosam? Optio debitis vel praesentium animi labore ut doloremque eligendi laboriosam id quasi. {console.log(myData)}</p>
        <p>{myData.map((post)=>{
          const {id,original_title, overview} = post;
          return (
            <div key={id}>
              <h2>{original_title}</h2>
              <h3>{overview}</h3>
            </div>
          )
        })
        }</p>
    </>
  );
};

export default About;
