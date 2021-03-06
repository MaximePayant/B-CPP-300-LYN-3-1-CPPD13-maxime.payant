/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Picture.hpp
*/

#ifndef PICTURE_HPP
#define PICTURE_HPP

#include <fstream>
#include <iostream>
#include <sstream>

class Picture
{

    public:
        std::string m_data;

        Picture();
        Picture(const Picture& copy);
        Picture(const std::string &file);
        ~Picture();

        bool getPictureFromFile(const std::string &file);
        const std::string& getAscii() const;
        Picture& operator=(const Picture& picture);

};

#endif // PICTURE_HPP