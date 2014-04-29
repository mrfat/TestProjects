#pragma once

#include <string>
using namespace std;
enum KvOperation 
{
	Upsert,
	Delete,
	StartCheckPoint,
	FinishCheckPoint
};

class CheckpointManager
{
public:
	void AddLog(KvOperation operation, string Key, string Value);
	void CreateCheckPoint();
private:


};

class IDictionary abstract
{
public:
	bool virtual ContainsKey(string key) = 0;
	void virtual Insert(string key, string value) = 0;
	void virtual Update(string key, string value) = 0;
	string virtual operator[](string key) = 0;
};

class PersistedStorage : IDictionary
{
public:
	bool virtual ContainsKey(string key);
	void virtual Insert(string key, string value);
	void virtual Update(string key, string value);
	string virtual operator[](string key);
};