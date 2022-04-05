// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS457LAB0103BlockGrid.h"
#include "SIS457LAB0103Block.h"
#include "Components/TextRenderComponent.h"
#include "Engine/World.h"

#define LOCTEXT_NAMESPACE "PuzzleBlockGrid"

ASIS457LAB0103BlockGrid::ASIS457LAB0103BlockGrid()
{
	// Create dummy root scene component
	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;

	// Create static mesh component
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetRelativeLocation(FVector(200.f,0.f,0.f));
	ScoreText->SetRelativeRotation(FRotator(90.f,0.f,0.f));
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(0)));
	ScoreText->SetupAttachment(DummyRoot);

	MibiografiaText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MibiografiaText0"));
	MibiografiaText->SetRelativeLocation(FVector(200.f, 0.f, 0.f));
	MibiografiaText->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
	MibiografiaText->SetText(FText::Format(LOCTEXT("MibiografiaFmt", "Mi nombre es Kevin Gomez Mollo\nTengo 25 años\nNaci el 21 de Julio de 1996,en Buenos Aires Argentina\nMis padres son Valentin Gomez Tito y Eva Mollo Benites\nTengo 4 hermanas llamadas Erika,Nicole,Valentina y Sasha\nTengo un solo abuelo llamado Ramon Gomez\nTengo una novia llamada Maria Luz\nTengo doble nacionalidad tanto argentina como boliviana\nActualmente vivo en la Ciudad de Sucre\nEstudio la carrera de Ingenieria de Sistemas\nMis pasastiempos favoritos son salir a comer ,ir a lugares tranquilos y jugar algunos videojuegos\nMi color favorito es el color verde\nMi club favorito de futbol es Boca Jr\nUno de mis sueños es poder viajar ,conocer lugares y comer comidas exoticas\nActualmente estoy en el tercer curso de la materia de sis457\n: {0}"), FText::AsNumber(0)));
	MibiografiaText->SetupAttachment(DummyRoot);

	// Set defaults
	Size = 3;
	BlockSpacing = 300.f;
}


void ASIS457LAB0103BlockGrid::BeginPlay()
{
	Super::BeginPlay();

	// Number of blocks
	const int32 NumBlocks = Size * Size;

	// Loop to spawn each block
	for(int32 BlockIndex=0; BlockIndex<NumBlocks; BlockIndex++)
	{
		const float XOffset = (BlockIndex/Size) * BlockSpacing; // Divide by dimension
		const float YOffset = (BlockIndex%Size) * BlockSpacing; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector BlockLocation = FVector(XOffset, YOffset, 0.f) + GetActorLocation();

		// Spawn a block
		ASIS457LAB0103Block* NewBlock = GetWorld()->SpawnActor<ASIS457LAB0103Block>(BlockLocation, FRotator(0,0,0));

		// Tell the block about its owner
		if (NewBlock != nullptr)
		{
			NewBlock->OwningGrid = this;
		}
	}
}


void ASIS457LAB0103BlockGrid::AddScore()
{
	// Increment score
	Score++;

	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("ScoreFmt", "Score: {0}"), FText::AsNumber(Score)));
}

void ASIS457LAB0103BlockGrid::AddMibiografia()
{
	// Increment score
	Score++;

	// Update text
	ScoreText->SetText(FText::Format(LOCTEXT("MibiografiaFmt", "Mibiografia: {0}"), FText::AsNumber(Score)));
}


#undef LOCTEXT_NAMESPACE
