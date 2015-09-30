setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sphere_2_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_2_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sphere_2_POSITION[0],                   
                          sphere_2_POSITION[1],                   
                          sphere_2_POSITION[2]);                  

    Rotate(modelWorld,    sphere_2_ROTATE[0],                     
                          sphere_2_ROTATE[1],                     
                          sphere_2_ROTATE[2],                     
                          sphere_2_ROTATE[3]++);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sphere_2_ROTATE[0],                     
                          sphere_2_ROTATE[1],                     
                          sphere_2_ROTATE[2],                     
                          sphere_2_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sphere_2_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sphere_2_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);           

