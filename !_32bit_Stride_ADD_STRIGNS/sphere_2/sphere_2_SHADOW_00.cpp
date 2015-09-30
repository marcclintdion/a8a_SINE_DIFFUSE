    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-       
    setupTransforms_Shadows();                                                                   
    //========================                                                                   

    LoadIdentity(modelWorld);                                                                    
    //------------------------                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, sphere_2_VBO);                                   
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_2_INDICES_VBO);                   
    //------------------------------------------------------------------------                   
    Translate(modelWorld, sphere_2_POSITION[0],                                    
                          sphere_2_POSITION[1],                                    
                          sphere_2_POSITION[2]);                                   
    //------------------------------------------------------------------------                   
    Rotate(modelWorld,    sphere_2_ROTATE[0],                                      
                          sphere_2_ROTATE[1],                                      
                          sphere_2_ROTATE[2],                                      
                          sphere_2_ROTATE[3]);                                     
//=============================================                                                  
SelectShader(shaderNumber);                                                                      
//=============================================                                                  
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);      
